/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 15:09:03 by jwolf             #+#    #+#             */
/*   Updated: 2018/04/24 15:11:02 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int     i;

    i = 0;
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
