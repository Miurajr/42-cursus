/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 10:38:06 by healexan          #+#    #+#             */
/*   Updated: 2022/11/16 13:27:56 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	star;

	substr = (char *)malloc(len + 1);
	if (!s || !substr)
		return (0);
	i = 0;
	star = start;
	while (star < ft_strlen(s) && i < len)
		substr[i++] = s[star++];
	substr[i] = '\0';
	return (substr);
}

/* 
int	main(void)
{
	char s[] = "Macacos me mordam";

	printf("%s\n", ft_substr(s, 1, 10));
} */