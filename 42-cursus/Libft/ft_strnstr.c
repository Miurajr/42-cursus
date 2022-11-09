/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:58:14 by healexan          #+#    #+#             */
/*   Updated: 2022/11/09 18:13:56 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != little[j] && !little[j])
	{
		i++;
		j++;
	}
	return ((char *)big + i);
}

/* int	main(void)
{
	char a[] = "abcde";
	char b[] = "abcde";

	printf("Original:'\n'%s", strnstr(a, b, 1));
} */