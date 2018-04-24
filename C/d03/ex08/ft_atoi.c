/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 12:31:09 by jwolf             #+#    #+#             */
/*   Updated: 2018/04/24 12:37:20 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     ft_atoi(char *str)
{
    int     i;
    int     res;
    int     c;

    c = 1;
    i = 0;
    res = 0;
    while (str[i] && ((str[i] >= '0' && str[i] <= '9') ||
                (i == 0 && (str[0] == '-' || str[i] == '+'))))
    {
        if (str[i] == '-' || str[i] == '+')
            i++;
        res =(res * c) + (str[i] - 48);
        c = 10;
        ++i;
    }
    if (str[0] == '-')
        res *= -1;
    return (res);
}

int     main(void)
{
    printf("%d", ft_atoi("-42"));

    return (0);
}
