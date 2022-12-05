/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:21:47 by healexan          #+#    #+#             */
/*   Updated: 2022/11/15 16:16:32 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	slen;

	slen = ft_strlen(s);
	ptr = malloc((slen + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s, slen + 1);
	return (ptr);
}
