/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machirin <machirin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:10:34 by machirin          #+#    #+#             */
/*   Updated: 2024/09/26 19:12:55 by machirin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *ft_calloc(size_t count, size_t size)
{
    char    *str;
    size_t  i;

    i = 0;
    str = (char *)malloc(count * size);

    if (str == 0)
            return (0);

    while (i < count * size)
    {
            str[i] = 0;
            i++;
    }
    return ((void *)str);
}
