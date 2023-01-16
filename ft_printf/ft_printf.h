/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:36:46 by healexan          #+#    #+#             */
/*   Updated: 2023/01/16 16:50:05 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include "libft/libft.h"

int	ft_puthex(unsigned int c, char base);
int	ft_putptr(void *p);
int	ft_printf(const char *str, ...);

#endif
