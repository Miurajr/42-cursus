/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uputnbr_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:15:15 by healexan          #+#    #+#             */
/*   Updated: 2023/01/16 13:36:50 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_uputnbr_pf(unsigned int n)
{
	char	*str;
	int		count;

	str = ft_uitoa(n);
	count = ft_putstr_pf(str);
	free(str);
	return (count);
}
/* {
	int				count;
	unsigned int	nb;

	count = 0;
	if (n < 0)
	{
		count += ft_putchar_pf('-');
		nb = (unsigned int)(n * -1);
	}
	else
	{
		nb = (unsigned)n;
	}
	if (nb >= 10)
	{
		ft_putnbr_pf(nb / 10);
	}
	count += ft_putchar_pf((nb % 10 + '0'));
	return (count);
}
 */
/* int	main(void)
{
	double n = 30.5;
	ft_putnbr_pf(n);
}
 */