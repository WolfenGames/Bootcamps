/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 14:17:39 by jwolf             #+#    #+#             */
/*   Updated: 2018/04/24 14:20:05 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_fibonacci(int index)
{
    if (index < 0)
        return (-1);
    if (index <= 2)
        return (index);
    return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int     main(void)
{
    int     a = 7;

    printf("%d", ft_fibonacci(a));
    return (0);
}
