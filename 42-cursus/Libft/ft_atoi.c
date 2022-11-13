/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healexan <healexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:09:29 by healexan          #+#    #+#             */
/*   Updated: 2022/11/13 21:08:25 by healexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int res;
    int sign;
    int i;

    res = 0;
    sign = 0;
    i = 0;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || 
            str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
                sign = -1;
            i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - '0';
        i++; 
    }
    return((int)res * sign);
}

int        main()
{
    char a[] = "-1231as23";


    printf("\n%d \n", atoi(a));
    printf("%d \n", ft_atoi(a));

    return(0);
}