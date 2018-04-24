/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 12:18:13 by jwolf             #+#    #+#             */
/*   Updated: 2018/04/24 12:28:17 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (*str++)
        i++;
    return (i);
}

char    *ft_strrev(char *str)
{
    int     count;
    int     i;
    char    c;

    count = ft_strlen(str); 
    i = 0;
    while (++i < ((count + 1) / 2))
    {
        c = str[i];
        str[i] = str[count - i];
        str[count - i] = c;
    }
    return (str);
}

/*
** asdf
*/

int     main(void)
{
    char    *s = "Race car";
    char    *ss;
    
    ss = (char *)malloc(sizeof(ss) * 256);
    ss = ft_strrev(s);
    printf("%s", ss);
    return (0);
}
