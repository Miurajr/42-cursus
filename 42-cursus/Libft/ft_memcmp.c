/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:12:10 by healexan          #+#    #+#             */
/*   Updated: 2022/11/07 09:37:32 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (((char *)str1)[i] != ((char *)str2)[i])
			return (((char *)str1)[i] - ((char *)str2)[i]);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char a[]	= "teste";
	char b[]	= "vacaa";

	printf("%d \n", memcmp(a, b, 4));
	printf("%d", ft_memcmp(a, b, 4));

	return (0);
}
 */