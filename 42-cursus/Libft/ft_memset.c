/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:13:25 by healexan          #+#    #+#             */
/*   Updated: 2022/11/04 14:34:12 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*conv_str;

	i = 0;
	conv_str = (unsigned char *)str;
	while (i < n)
	{
		conv_str[i++] = c;
	}
	return (str);
}

/* int		main()
{
	char a[] = "Esta frase não tem nada cá dentro.";
	char b[] = "Esta frase não tem nada cá dentro.";
	char c = 's';
	printf("\n%s \n", a);
	memset(a + 5, c, 2);
	printf("%s\n", a);
	printf("\n%s \n", b);
	ft_memset(b + 5, c, 2);
	printf("%s\n", b);
} */