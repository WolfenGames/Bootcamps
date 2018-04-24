/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 15:01:59 by jwolf             #+#    #+#             */
/*   Updated: 2018/04/24 15:05:54 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_atoi(char *str)
{
    int     ret;
    int     neg;
    int     i;

    i = 0;
    neg = 0;
    ret = 0;

    while (str[i] == ' ' || (str[i] <= 13 && str[i] >= 8))
        i++;
    if (str[i] == '-')
        neg = -1;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        ret *= 10;
        ret += (int)str[i] - 48;
        i++;
    }
    return (ret * neg);
}