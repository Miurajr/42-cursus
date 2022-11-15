/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:02:29 by healexan          #+#    #+#             */
/*   Updated: 2022/11/14 16:16:12 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!src && !dest)
		return (0);
	i = 0;
	if ((size_t)dest - (size_t)src < n)
	{
		i = n - 1;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}	
	else
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return ((unsigned char *)dest);
}

/* int		main()
{
	char dest1[] = "Henrique Junior";
	char src[] = "Não sei se ele ainda canta.";

	//printf("\n%s \n", dest1);
	//ft_memmove(dest1, src, 35);
	//printf("%s\n", dest1);

	printf("\n%s \n", dest1);
	ft_memmove(dest1, src, 10);
	printf("%s\n", dest1);
} */