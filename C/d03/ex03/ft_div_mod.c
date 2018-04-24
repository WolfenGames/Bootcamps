/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 11:46:08 by jwolf             #+#    #+#             */
/*   Updated: 2018/04/24 11:56:36 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    int nbr;

    nbr = nb;
    if (nbr < 0)
    {
        ft_putchar('-');
        nbr *= -1;
    }
    if (nbr >= 10)
    {
        ft_putnbr(nbr / 10);
        ft_putnbr(nbr % 10);
    }
    else
        ft_putchar(nbr + 48);
}

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

/*
** You know.
*/

int     main(void)
{
    int     *div;
    int     *mod;
    int     a;
    int     b;

    div = (int *)malloc(sizeof(*div));
    mod = (int *)malloc(sizeof(*mod));
    a = 20;
    b = 10;

    ft_div_mod(a, b, div, mod);
    printf("%d:%d::%d:%d", *div, *mod, a, b);
}
