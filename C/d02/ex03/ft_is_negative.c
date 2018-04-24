/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 10:22:22 by jwolf             #+#    #+#             */
/*   Updated: 2018/04/24 10:26:27 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

/*
** NULL == 0
*/

void    ft_is_negative(int n)
{
    if (n >= 0)
        ft_putchar('P');
    else if (n < 0)
        ft_putchar('N');
}

int     main(void)
{
    int     i;

    i = -10;
    while (i <= 10)
        ft_is_negative(i++);

    return (0);
}
