/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:01:13 by healexan          #+#    #+#             */
/*   Updated: 2022/11/08 15:05:26 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (c +32);
	}
	return (c);
}

/* int	main()
{
	char c = 'a';
	printf("%c\n", ft_tolower(c));
		char b = 'Z';
	printf("%c", ft_tolower(b));
} */