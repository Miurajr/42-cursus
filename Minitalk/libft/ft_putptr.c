/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:41:55 by healexan          #+#    #+#             */
/*   Updated: 2023/01/19 14:18:55 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putptr(void *p)
{
	size_t	count;

	if (!p)
		return (ft_putstr_pf("(nil)"));
	count = 0;
	count += ft_putstr_pf("0x");
	count += ft_puthex((unsigned long)p, 'x');
	return (count);
}
