/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 14:05:14 by jwolf             #+#    #+#             */
/*   Updated: 2018/04/24 14:07:38 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_recursive_factorial(int nb)
{
    if (nb <= 0 || nb > 12)
        return (0);
    if (nb == 0 || nb == 1)
        return (1);
    return (nb * ft_recursive_factorial(nb - 1));
}

int     main(void)
{
    int     a = 11;

    printf("%d", ft_recursive_factorial(a));
    return (0);
}
