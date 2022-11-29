/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:12:54 by healexan          #+#    #+#             */
/*   Updated: 2022/11/25 12:33:58 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_cpy;
	unsigned char	*src_cpy;
	size_t			i;

	i = 0;
	if ((!src && !dest))
		return (NULL);
	dest_cpy = (unsigned char *) dest;
	src_cpy = (unsigned char *) src;
	while (i < n)
	{
		*(dest_cpy + i) = *(src_cpy + i);
		i++;
	}
	return (dest);
}
/*
int main(void)
{
    char dest[15] = "era gtfh 543hf";
    char src[21] = "gdghdtg hfyhfyth fht";
    puts(dest);
    ft_memcpy(dest,src,8);
    puts(dest);
    return(0);
}
*/
