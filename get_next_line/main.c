/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 10:14:21 by mamaral-          #+#    #+#             */
/*   Updated: 2022/12/06 17:25:16 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

/* int	main(void)
{
	char	*ptrs;
	int		fd;
	int		counter;
	counter = 1;
	fd = open("test.txt", O_RDONLY);	
	while (counter)
	{
		if (fd == -1)
			printf("Enable to open file or file does not exist.\n");
		else if (fd == 0)
			printf("Nothing to read.\n");
		else
		{
			ptrs = get_next_line(fd);
			if (!ptrs)
			{
				printf("\n-END-");	
				counter = 0;
			}
			else
				printf("- %s", ptrs);
		}		
	}
	close(fd);
} */

int	main(void)
{
	char	*ptrs;
	int		fd;

	fd = open("test.txt", O_RDONLY);
	ptrs = get_next_line(fd);
	printf("-%s", ptrs);
	ptrs = get_next_line(fd);
	printf("-%s", ptrs);
	close(fd);
}
