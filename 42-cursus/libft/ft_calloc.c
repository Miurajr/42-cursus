/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:50:22 by healexan          #+#    #+#             */
/*   Updated: 2022/11/15 13:09:47 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t *ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return(NULL);
	ft_bzero(ptr, (nmemb * size));
		return(ptr);	
}