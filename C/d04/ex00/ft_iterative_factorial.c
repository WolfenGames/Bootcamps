/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 14:00:22 by jwolf             #+#    #+#             */
/*   Updated: 2018/04/24 14:04:04 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_iterative_factorial(int nb)
{
    int     res;
    int     i;

    i = 1;
    res = 1;
    if ((nb <= 0) || (nb > 12))
        return (0);
    if (nb == 1)
        return (1);
    while (++i <= nb)
    {
        res *= i;
    }
    return (res);
}

int     main(void)
{
    int     a;

    a = 11;
    printf("%d", ft_iterative_factorial(a));
    return (0);
}
