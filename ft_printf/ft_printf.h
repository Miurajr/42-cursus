/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:36:46 by healexan          #+#    #+#             */
/*   Updated: 2023/01/18 17:26:35 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <ctype.h>
# include <string.h>
# include <bsd/string.h>
# include <stddef.h>
# include "libft/libft.h"

int	ft_puthex(unsigned long c, char base);
int	ft_putptr(void *p);
int	ft_printf(const char *str, ...);

#endif
