/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 10:41:49 by jwolf             #+#    #+#             */
/*   Updated: 2018/04/24 10:51:03 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    int     first;
    int     second;

    if (nb > 9)
    {
        first = nb / 10;
        second = nb % 10;
        ft_putchar(first + 48);
        ft_putchar(second + 48);
    }
    else
    {
        ft_putchar('0');
        ft_putchar(nb + 48);
    }
}

void    ft_print_comb2(void)
{
    int     i;
    int     j;

    i = 0;
    while (i <= 99)
    {
        j = i + 1;
        while (j <= 99)
        {
            ft_putnbr(i);
            ft_putchar(' ');
            ft_putnbr(j);
            if (i < 98 || j < 99)
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
            ++j;
        }
        ++i;
    }
}

/*
** Do not do this part
*/

int     main(void)
{
    ft_print_comb2();
    return (0);
}
