/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:14:54 by healexan          #+#    #+#             */
/*   Updated: 2022/11/03 16:02:25 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	int	c;

	c = '😏';
	printf("this is not a ascii char: %i\n", ft_isascii(c));
	c = '4';
	printf("this is a ascii char: %i\n", ft_isascii(c));
}
 */