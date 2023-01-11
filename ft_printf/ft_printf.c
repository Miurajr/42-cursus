/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:21:43 by healexan          #+#    #+#             */
/*   Updated: 2023/01/10 20:00:26 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar_pf(va_arg(args, int));
	else if (c == 's')
	count += 1;
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

int	main(void)
{
	char *c = "abcde";

	printf("Printf real == Resultado: %c\n", c[1]);
	ft_printf("Printf meu == Resultado: %c\n", c[1]);
}
