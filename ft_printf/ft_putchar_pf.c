/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:38:21 by healexan          #+#    #+#             */
/*   Updated: 2023/01/10 19:41:03 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_pf(int c)
{
	write(1, &c, 1);
	return (1);
}

/* int	main(void)
{
	const char teste[] = "abcde";
	ft_putchar_pf(teste[0]);
	return (0);	
}
 */