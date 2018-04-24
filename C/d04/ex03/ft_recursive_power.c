/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 14:13:14 by jwolf             #+#    #+#             */
/*   Updated: 2018/04/24 14:16:43 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_recursive_power(int nb, int power)
{
    if (power >= 2)
        return (nb * ft_recursive_power(nb, power - 1));
    else
        return (nb);
}

int     main(void)
{
    int     a = 2;
    int     b = 3;

    printf("%d", ft_recursive_power(a, b));
    return (0);
}
