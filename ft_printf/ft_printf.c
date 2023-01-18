/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:21:43 by healexan          #+#    #+#             */
/*   Updated: 2023/01/18 16:40:26 by healexan         ###   ########.fr       */
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
	else if (c == 'u')
		count += ft_uputnbr_pf(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		count += ft_puthex(va_arg(args, unsigned long), c);
	else if (c == 'p')
		count += ft_putptr(va_arg(args, void *));
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
	return (lenght);
}
/* 
 int	main(void)
{
	void *p = (void *) main;
	char *c = "teste do teste";
	unsigned int b = -1;
	int a = 9999;

	printf("Printf real == Resultado Char: %c\n", c[1]);
	ft_printf("Printf meu  == Resultado Char: %c\n", c[1]);
	printf("=================//=================\n");
	printf("Printf real == Resultado STR: %s\n", c);
	ft_printf("Printf meu  == Resultado STR: %s\n", c);
	printf("=================//=================\n");
	printf("Printf real == Resultado Porcento: %%\n");
	ft_printf("Printf meu  == Resultado Porcento: %%\n");
	printf("=================//=================\n");
	printf("Printf real == Resultado Unsigned: %u\n", b);
	ft_printf("Printf meu  == Resultado Unsigned: %u\n", b);
	printf("=================//=================\n");
	ft_printf("Printf meu  == Resultado hex: %x\n", a);
	printf("Printf Real  == Resultado hex: %x\n", a);
	printf("=================//=================\n");
	ft_printf("Printf meu  == Resultado ptr: %p\n", c);
	printf("Printf Real == Resultado ptr: %p\n", c);
	printf("=================//=================\n");
	ft_printf("Printf meu  == Resultado ptrbraga: %p\n", p);
	printf("Printf Real == Resultado ptrbraga: %p\n", p);
} */
