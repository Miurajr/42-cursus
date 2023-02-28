/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:07:30 by healexan          #+#    #+#             */
/*   Updated: 2023/02/27 19:04:41 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handle_sigusr(int signum, siginfo_t *info, void *ucontent)
{
	static	int	bit_itr = -1;
	static unsigned char	c;

	(void)ucontent;
	if (bit_itr < 0)
		bit_itr = 7;
	if (signum == SIGUSR1)
		c |= (1 << bit_itr);
	bit_itr--;
	if (bit_itr < 0)
	{
		ft_putchar_pf(c);
		c = 0;
		if (kill(info->si_pid, SIGUSR1) == -1)
			ft_printf("Fail to send SIGUSR1");
	}
	
}

void	config_signals(void)
{
	struct sigaction	sa_newsig;

	sa_newsig.sa_sigaction = &handle_sigusr;
	sa_newsig.sa_flags = SA_SIGINFO;
	if (sigaction(SIGUSR1, &sa_newsig, NULL) == -1)
		ft_printf("Fail to handle SIGUSR1");
	if (sigaction(SIGUSR2, &sa_newsig, NULL) == -1)
		ft_printf("Fail to handle SIGUSR2");
}

int	main(void)
{
	int pid;

	pid = getpid();
	ft_printf("PID:%d\n", pid);
	ft_printf("Waiting for signal...\n");
	while (1)
	{
		config_signals();
	}
	return (EXIT_SUCCESS);
}