/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 11:37:30 by jwolf             #+#    #+#             */
/*   Updated: 2018/04/24 11:44:42 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void    ft_swap(int *a, int *b)
{
    int     c;

    c = *a;
    *a = *b;
    *b = c;
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    int     nbr;

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
    {
        ft_putchar(nbr + 48);
    }
}

/*
** ...
*/

int     main(void)
{
    int     *a;
    int     *b;

    a = (int *)malloc(sizeof(a));
    b = (int *)malloc(sizeof(b));

    *a = 12;
    *b = 21;
    ft_putnbr(*a);
    ft_putchar(' ');
    ft_putnbr(*b);
    ft_putchar('/');

    ft_swap(a, b);
    
    ft_putnbr(*a);
    ft_putchar(' ');
    ft_putnbr(*b);
    return (0);
}
