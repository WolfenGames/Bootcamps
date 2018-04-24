/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 10:18:02 by jwolf             #+#    #+#             */
/*   Updated: 2018/04/24 10:21:25 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_numbers(void)
{
    int     i;

    i = '0';
    while (i <= '9')
        ft_putchar(i++);
}

/*
** Same as before, dont do this
*/

int     main(void)
{
    ft_print_numbers();
    return (0);
}
