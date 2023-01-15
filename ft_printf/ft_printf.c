/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:21:43 by healexan          #+#    #+#             */
/*   Updated: 2023/01/14 15:51:43 by healexan         ###   ########.fr       */
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
		count += ft_putstr_pf(va_arg(args, char *));
	else if (c == '%')
		count += ft_putchar_pf('%');
	else if (c == 'd' || c == 'i')
		count += ft_putnbr_pf(va_arg(args, int));
	else if (c == 'x')
		count += ft_puthex(va_arg(args, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		count += ft_puthex(va_arg(args, unsigned int), "0123456789ABCDEF");
	return (count);
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
	printf("lenght: %d\n", lenght);
	return (lenght);
}

int	main(void)
{
	char *c = "teste do teste";

	printf("Printf real == Resultado Char: %c\n", c[1]);
	ft_printf("Printf meu == Resultado Char: %c\n", c[1]);
	printf("=================//=================\n");
	printf("Printf real == Resultado STR: %s\n", c);
	ft_printf("Printf meu == Resultado STR: %s\n", c);
	printf("=================//=================\n");
	printf("Printf real == Resultado Porcento: %%\n");
	ft_printf("Printf meu == Resultado Porcento: %%\n");
}
