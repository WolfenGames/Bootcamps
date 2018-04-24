/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 11:57:35 by jwolf             #+#    #+#             */
/*   Updated: 2018/04/24 12:10:41 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
    int     c;

    c = *a;
    *a = c / *b;
    *b = c % *b;
}

/*
** ive gotten lazy
*/

int     main(void)
{
    int     *a;
    int     *b;
    
    a = (int *)malloc(sizeof(*a));
    b = (int *)malloc(sizeof(*b));

    *a = 10;
    *b = 30;
    ft_ultimate_div_mod(a, b);
    printf("%d:%d", *a, *b);
}
