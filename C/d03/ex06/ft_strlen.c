/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 12:15:00 by jwolf             #+#    #+#             */
/*   Updated: 2018/04/24 12:17:43 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (*str++)
        i++;
    return (i);
}

/*
 * ugh
 */

int     main(void)
{
    char    *s = "Test";
    int     x = ft_strlen(s);
    printf("%d", x);
    return (0);
}
