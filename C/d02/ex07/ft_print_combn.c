/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 11:02:22 by jwolf             #+#    #+#             */
/*   Updated: 2018/04/24 11:19:48 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    printr(int *range, int n)
{
    int     i;
    int     display;

    display = 1;
    i = 0;
    while (++i < n)
        if (range[i - 1] >= range[i])
            display = 0;
    if (!display)
        return ;
    i = -1;
    while (++i < n)
        ft_putchar(range[i] + 48);
    if (range[0] < (10 - n))
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
}

void    ft_print_combn(int n)
{
    int     i;
    int     range[10];

    if (n > 10 || n < 0)
        return ;
    i = -1;
    while (++i < n)
        range[i] = i;
    while (range[0] <= (10 - n) && n >= 1)
    {
        printr(range, n);
        if (n == 10)
            break ;
        range[n - 1]++;
        i = n;
        while (i && n > 1)
        {
            i--;
            if (range[i] > 9)
            {
                range[i - 1]++;
                range[i] = 0;
            }
        }
    }
}

/*
** Dont DO this
*/
int     main(void)
{
    ft_print_combn(9);
    return (0);
}
