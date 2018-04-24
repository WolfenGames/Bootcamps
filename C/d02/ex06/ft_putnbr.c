/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 10:52:27 by jwolf             #+#    #+#             */
/*   Updated: 2018/04/24 10:59:13 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
        nbr = nbr * (-1);
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
** Same old, dont do this part
*/

int     main(void)
{
    for (int i = -20; i <= 20; i++)
    {
        ft_putnbr(i);
        ft_putchar('\n');
    }
    return (0);
}
