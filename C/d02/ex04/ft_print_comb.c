/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 10:26:59 by jwolf             #+#    #+#             */
/*   Updated: 2018/04/24 10:40:40 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_comb(void)
{
    char    a;
    char    b;
    char    c;

    a = 47;
    while (a <= '7')
    {
        b = ++a;
        while (b <= '8')
        {
            c = ++b + 1;
            while (c <= '9')
            {
                ft_putchar(a);
                ft_putchar(b);
                ft_putchar(c++);
                if (a != '7')
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
            }
        }
    }
}

/*
** Do not do this
*/

int     main(void)
{
    ft_print_comb();
    return (0);
}
