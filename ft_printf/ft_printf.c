/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:21:43 by healexan          #+#    #+#             */
/*   Updated: 2023/01/09 19:30:21 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_type(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar_pf(va_arg(args, char));
	else if (c == 's')
		
}
int	ft_printf(const char *str, ...)
{
	int		i;
	int		lenght;
	va_list	args;

	i = -1;
	lenght = 0;
	if (!str)
		return (0);
	va_start(args, str);
	while (str[++i])
	{
		if (str[i] == '%')
		{
			i++;
			lenght += ft_type(str[i], args);
		}
		else
			lenght += ft_putchar_pf(str[i]);
	}
	va_end(args);
	return (lenght);
}
