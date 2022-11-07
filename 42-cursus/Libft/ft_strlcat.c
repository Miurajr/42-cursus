/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:33:00 by healexan          #+#    #+#             */
/*   Updated: 2022/11/07 17:13:44 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dsz;

	dsz = ft_strlen(dst);
	if (size <= dsz)
		return (size + dsz);
	i = 0;
	while (src[i] != '\0' && dsz +1 < size)
	{
		dst[dsz] = src[i];
		i++;
		dsz++;
	}
	dst[dsz] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
