/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:07:01 by healexan          #+#    #+#             */
/*   Updated: 2023/01/19 16:13:37 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long c, const char base)
{
	int		count;

	count = 0;
	if (c >= 16)
	{
		count += ft_puthex(c / 16, base);
		count += ft_puthex(c % 16, base);
	}
	else if (c <= 9)
		count += ft_putchar_pf(c + '0');
	else if (base == 'x')
		count += ft_putchar_pf((c - 10) + 'a');
	else if (base == 'X')
		count += ft_putchar_pf((c - 10) + 'A');
	return (count);
}
