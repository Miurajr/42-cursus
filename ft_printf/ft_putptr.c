/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:41:55 by healexan          #+#    #+#             */
/*   Updated: 2023/01/16 17:28:38 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_putptr(void *p)
{
	int	count;

	if (!p)
		return (ft_putstr_pf("(nil)"));
	count = 0;
	count += ft_putstr_pf("0x");
	count += ft_puthex((unsigned long long)p, 'x');
	return (count);
}
