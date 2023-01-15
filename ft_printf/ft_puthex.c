/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:07:01 by healexan          #+#    #+#             */
/*   Updated: 2023/01/13 16:17:25 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int c, char *base)
{
	char	*str;
	int		lenght;

	str = hexstr(c, base);
	lenght = ft_putstr_pf(str);
	free(str);
	return (lenght);
}
