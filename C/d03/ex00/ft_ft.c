/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 11:23:30 by jwolf             #+#    #+#             */
/*   Updated: 2018/04/24 11:28:01 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

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

void    ft_ft(int *nbr)
{
    *nbr = 42;
}

/*
** DONT DO THIS!
*/

int     main(void)
{
    int     *nbr;

    nbr = (int *)malloc(sizeof(nbr));
    ft_ft(nbr);
    ft_putnbr(*nbr);
    return (0);
}
