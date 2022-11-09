/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:07:33 by healexan          #+#    #+#             */
/*   Updated: 2022/11/09 15:57:01 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i <= n && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/* int	main(void)
{
	char a[] = "abcdG";
	char b[] = "abcdg";

	printf("original:\n%d", strncmp(a, b, 5));
	printf("\nMinha:\n%d", strncmp(a, b, 5));
	return (0);
} */