/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:39:28 by healexan          #+#    #+#             */
/*   Updated: 2022/11/22 16:05:53 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	n_leng(int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	s;
	size_t	size;

	size = n_leng(n);
	str = malloc((sizeof(char) * (size + 1)));
	if (str == NULL)
		return (NULL);
	s = 1;
	str[size] = '\0';
	size--;
	if (n < 0)
	{
		str[0] = '-';
		s = -1;
	}
	else if (n == 0)
		str[size] = '0';
	while (n != 0)
	{
		str[size] = ((n % 10) * s) + 48;
		n = n / 10;
		size--;
	}
	return (str);
}
