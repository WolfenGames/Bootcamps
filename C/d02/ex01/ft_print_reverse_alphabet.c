/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 10:15:01 by jwolf             #+#    #+#             */
/*   Updated: 2018/04/24 10:17:00 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_reverse_alphabet(void)
{
    int     i;

    i = 'z';
    while (i >= 'a')
        ft_putchar(i--);
}

/*
** Do not do this part
*/

int     main(void)
{
    ft_print_reverse_alphabet();
    return (0);
}
