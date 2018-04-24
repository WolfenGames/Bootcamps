/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 14:21:18 by jwolf             #+#    #+#             */
/*   Updated: 2018/04/24 14:26:05 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_sqrt(int nb)
{
    int     curr;

    curr = 1;
    if (nb <= 0)
        return (0);
    while ((curr * curr) < nb)
        curr++;
    if (curr % nb == 0)
        return (curr);
    else
        return (0);
}

int     main(void)
{
    int     a = 8;

    printf("%d", ft_sqrt(a));
    return (0);
}
