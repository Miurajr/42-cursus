/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:51:12 by healexan          #+#    #+#             */
/*   Updated: 2023/01/12 18:22:11 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_pf(char *s)
{
	int	i;

	i = 0;
	if (s != NULL)
	{
		while (s[i])
		{
			ft_putchar_pf(s[i]);
			i++;
		}		
	}
	return (i);
}

/* int	main(void)
{
	ft_putstr("só funciona12345\n");
	return (0);
}
 */