/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:06:24 by healexan          #+#    #+#             */
/*   Updated: 2022/11/04 14:32:31 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t n)
{
	unsigned char	*conv_s;
	size_t			i;

	i = 0;
	conv_s = (unsigned char *)ptr;
	while (i < n)
	{
		*(conv_s + i) = '\0';
		i++;
	}
}

/* int		main()
{
	char str[] = "Ficheiro Do Ficheiro Da Ficheira.";

	printf("\n%s\n", str);
	ft_bzero(str, 1);
	printf("%s\n", str + 1); // se for + 4 é o '\0';
} */