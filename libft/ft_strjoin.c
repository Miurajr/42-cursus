/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:30:43 by healexan          #+#    #+#             */
/*   Updated: 2022/11/25 12:40:17 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*new_str;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1)
		return (NULL);
	i = 0;
	j = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	new_str = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (new_str == NULL)
		return (NULL);
	while (j < len_s1)
		new_str[i++] = s1[j++];
	j = 0;
	while (j < len_s2)
		new_str[i++] = s2[j++];
	new_str[i] = '\0';
	return (new_str);
}

/* int	main(void)
{
	char s1[] = "macacos";
	char s2[] = " me mordam";

	printf("%s\n", ft_strjoin(s1, s2));
} */