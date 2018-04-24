/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort__integer_table.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 12:38:07 by jwolf             #+#    #+#             */
/*   Updated: 2018/04/24 12:40:05 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_sort_integer_table(int *tab, int size)
{
    int     count;
    int     i;
    int     tmp;

    count = 0;
    while (count < size)
    {
        i = 0;
        while (i < (size - 1))
        {
            if (tab[i] > tab[i + 1])
            {
                tmp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = tmp;
            }
            i++;
        }
        count++;
    }
    return (tab);
}
