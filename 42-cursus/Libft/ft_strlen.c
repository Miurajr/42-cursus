/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:06:34 by healexan          #+#    #+#             */
/*   Updated: 2022/11/04 13:28:56 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != 0)
		i++;
	return (i);
}

/* int	main(void)
{
	char	*c;

	c = "hello world";
	printf("Your string size is: %i\n", ft_strlen(c));
}
 */