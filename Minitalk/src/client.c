/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:35:48 by healexan          #+#    #+#             */
/*   Updated: 2023/02/28 20:16:16 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	args_check(int argc, char **argv)
{
	int	i;

	i = -1;
	if (argc != 3)
	{
		ft_printf("invalid number of params");
		exit(EXIT_FAILURE);
	}
	while(argv[1][++i])
	{
		if(!ft_strchr("0123456789", argv[1][i]))
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

	while (*msg)
	{
		c = *msg;
		nbr_bits = 8;
		while (nbr_bits--)
		{
			if (c & 0b10000000)
				kill(sv_pid, SIGUSR1);
			else
				kill(sv_pid, SIGUSR2);
			usleep(50);
			c <<=1;
		}
		msg++;
	}
}

void	sig_handler(int signum)
{
	if (signum == SIGUSR1)
		ft_printf("Signal coming out!\n");
}

void	config_signals(void)
{
	struct sigaction new_sig;

	new.sig.sa_handler = &sig_handler;
	new_sig.sa_flags = SA_SIGINFO;
	if (sigaction(SIGUSR1, &new_sig, NULL) == -1)
		ft_printf("Fail to change SIGUSR1");
	if (sigaction(SIGUSR2, &new_sig, NULL) == -1)
		ft_printf("Fail to change SIGUSR2");
}

int	main(int argc, char **argv)
{
	int pid;

	pid = getpid();
	ft_printf("CLIENT PID = %d\n", pid);
	args_check(argc, argv);
	config_signals();
	send_msg(ft_atoi(argv[1]), argv[2]);
	return (EXIT_SUCCESS);
}