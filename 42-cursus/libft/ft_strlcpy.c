/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:16:40 by healexan          #+#    #+#             */
/*   Updated: 2022/11/16 13:47:44 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	srclen;
	size_t	i;

	srclen = ft_strlen(src);
	if (!dest || !src)
		return (0);
	if (size == 0)
		return (srclen);
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
			i++;
	}
		dest[i] = '\0';
	return (srclen);
}

/* int		main()
{
	char a[] = "Ola, quem fala?";
	char b[] = "Sou eu.";

	char c[] = "Ola, quem fala?";
	char d[] = "Sou eu.";

	printf("%zu\n", strlcpy(b, a, -55));
	printf("%s\n", b);

	printf("\n%zu\n", ft_strlcpy(d, c, -55));
	printf("%s\n", d);

	return (0);
} */