/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:04:52 by healexan          #+#    #+#             */
/*   Updated: 2023/01/18 16:35:02 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
}
