/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 15:12:22 by jwolf             #+#    #+#             */
/*   Updated: 2018/04/24 15:17:55 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_strlen(char  *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char    *ft_strstr(char *str, char *to_find)
{
    int     i;
    int     j;

    if (ft_strlen(to_find) == 0)
        return (str);
    while (str[i])
    {
        while (to_find[j])
        {
            if (str[i + j] == to_find[j])
                j++;
            else
            {
                j = 0;
                break ;
            }
        }
        if (to_find[j] == '\0')
            return (str + i);
        i++;
    }
    return (0);
}
