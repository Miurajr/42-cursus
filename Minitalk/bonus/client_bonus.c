/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:35:48 by healexan          #+#    #+#             */
/*   Updated: 2023/03/03 17:06:47 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	args_check(int argc, char **argv)
{
	int	i;

	i = -1;
	if (argc != 3)
	{
		ft_printf("invalid number of params\n\
		Insert the PID and the message to be broadcast.");
		exit(EXIT_FAILURE);
	}
	while (argv[1][++i])
	{
		if (!ft_strchr("0123456789", argv[1][i]))
		{
			ft_printf("Incorrect PID!");
			exit(EXIT_FAILURE);
		}
	}
	if (*argv[2] == 0)
	{
		ft_printf("Empty message");
		exit(EXIT_FAILURE);
	}
}

void	send_msg(int sv_pid, char *msg)
{
	unsigned char	c;
	int				nbr_bits;
	int				len;
	int				i;

	i = 0;
	len = ft_strlen(msg);
	while (i <= len)
	{
		c = msg[i];
		nbr_bits = 8;
		while (nbr_bits--)
		{
			if (c & 0b10000000)
				kill(sv_pid, SIGUSR1);
			else
				kill(sv_pid, SIGUSR2);
			usleep(500);
			c <<= 1;
		}
		i++;
	}
}

void	sig_handler(int signum)
{
	if (signum == SIGUSR1)
		ft_printf("Success to send the message!\n");
}

void	config_signals(void)
{
	struct sigaction	new_sig;

	new_sig.sa_handler = &sig_handler;
	new_sig.sa_flags = SA_SIGINFO;
	if (sigaction(SIGUSR1, &new_sig, NULL) == -1)
		ft_printf("Fail to change SIGUSR1");
	if (sigaction(SIGUSR2, &new_sig, NULL) == -1)
		ft_printf("Fail to change SIGUSR2");
}

int	main(int argc, char **argv)
{
	int	pid;

	pid = getpid();
	ft_printf("CLIENT PID = %d\n", pid);
	args_check(argc, argv);
	config_signals();
	send_msg(ft_atoi(argv[1]), argv[2]);
	return (EXIT_SUCCESS);
}
