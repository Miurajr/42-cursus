/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:44:44 by healexan          #+#    #+#             */
/*   Updated: 2022/12/06 17:43:02 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read(int fd, char *s)
{
	char	*str;
	int		readcontrol;

	str = malloc((BUFFER_SIZE + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	readcontrol = 1;
	while (!ft_strchr(s) && readcontrol != 0)
	{
		readcontrol = read(fd, str, BUFFER_SIZE);
		if (readcontrol < 0)
		{
			free(str);
			return (NULL);
		}
		str[readcontrol] = '\0';
		s = ft_strjoin(s, str);
	}
	free(str);
	return (s);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*schar;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	schar = ft_read(fd, schar);
	if (!schar)
		return (NULL);
	line = ft_get_line(schar);
	schar = ft_new_line(schar);
	return (line);
}
