/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 14:09:08 by jwolf             #+#    #+#             */
/*   Updated: 2018/04/24 14:12:30 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_iterative_power(int nb, int power)
{
    int     res;

    res = 1;
    if ((nb == 0 && power != 0) || power < 0)
        return (0);
    if ((power == 0) || ((nb < 0) && (power == 0)))
        return (1);
    else
    {
        while (power > 0)
        {
            res = nb * res;
            power--;
        }
        return (res);
    }
}

int     main(void)
{
    int     a = 2;
    int     b = 3;

    printf("%d", ft_iterative_power(a, b));
    return (0);
}
