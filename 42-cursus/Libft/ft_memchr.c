/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:39:02 by healexan          #+#    #+#             */
/*   Updated: 2022/11/07 09:59:50 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)str)[i] == ((unsigned char)c))
			return ((void *)(str + i));
		i++;
	}
	return (0);
}

/* int main ()
{
   const char str[] = "henrique";
   const char ch = 'e';
   char *ret;
   char	*aa;

   ret = ft_memchr(str, ch, 6);
   printf("%s \n", ret);
   aa = memchr(str, ch, 6);
   printf("%s", aa);

   return(0);
} */