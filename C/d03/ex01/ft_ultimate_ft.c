/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 11:29:59 by jwolf             #+#    #+#             */
/*   Updated: 2018/04/24 11:37:05 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    int nbr;

    nbr = nb;
    if (nb < 0)
    {
        ft_putchar('-');
        nb *= -1;
    }
    if (nb >= 10)
    {
        ft_putnbr(nbr / 10);
        ft_putnbr(nbr % 10);
    }
    else
    {
        ft_putchar(nbr + 48);
    }
}

void    ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

/*
** You know the story
** Testing fails
*/

int     main(void)
{
    int     *********nbr;

    nbr = malloc(sizeof(*********nbr));
    ft_ultimate_ft(nbr);
    ft_putnbr(*********nbr);
    return (0);
}
