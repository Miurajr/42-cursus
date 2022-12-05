/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:33:00 by healexan          #+#    #+#             */
/*   Updated: 2022/11/16 13:53:36 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	ssz;
	size_t	dsz;

	ssz = ft_strlen(src);
	if (n == 0)
		return (ssz);
	dsz = ft_strlen(dest);
	if (n < dsz)
		return (ssz + n);
	i = 0;
	while (src[i] && dsz + i < (n - 1))
	{
		dest[dsz + i] = src[i];
		i++;
	}
	dest[dsz + i] = '\0';
	return (dsz + ssz);
}

/* int		main()
{
	char a[] = " Junior";
	char b[] = "Henrique";

	char c[] = " Junior";
	char d[] = "Henrique";

	printf("%ld\nOriginal:\n", strlcat(b, a, 20));
	printf("%s\n", b);

	printf("\n%ld\nMinha:\n", ft_strlcat(d, c, 20));
	printf("%s\n", d);

	return (0);
} */