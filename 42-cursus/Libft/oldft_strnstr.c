/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:58:14 by healexan          #+#    #+#             */
/*   Updated: 2022/11/12 17:33:40 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	j = 0;
	while (big[i] != '\0' && i <= len)
	{
		j = 0;
		while (little[j] != '\0')
		{
			{if (big[i] == little[j])
				return ((char *)&big[i]);}
			
			j++;
		}
		i++;	
	}
	return (NULL);
}

 int	main(void)
{
	char a[] = "abacate";
	char b[] = "ca";

/* 	printf("Original:'\n'%s", strnstr(a, b, 5));
 */	printf("Minha:'\n'%s", ft_strnstr(a, b, 5));
} 