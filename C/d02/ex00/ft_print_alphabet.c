/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 10:08:53 by jwolf             #+#    #+#             */
/*   Updated: 2018/04/24 10:14:24 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_alphabet(void)
{
    int     i;

    i = 'a';
    while (i <= 'z')
        ft_putchar(i++);
}

/*
** Do not do this, this is for testing only 
*/

int     main(void)
{
    ft_print_alphabet();
    return (0);
}
