/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 14:27:10 by jwolf             #+#    #+#             */
/*   Updated: 2018/04/24 14:31:43 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_is_prime(int nb)
{
    int     i;

    i = 2;
    if (nb <= 1)
        return (0);
    while (i <= nb / i)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int     main(void)
{
    int     a = 3;
    int     b = 1;
    int     c = 7;
    int     d = 0;

    printf("%d::%d::%d::%d", ft_is_prime(a), ft_is_prime(b), ft_is_prime(c),
            ft_is_prime(d));
    return (0);
}
