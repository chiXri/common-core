/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m.chiri <m.chiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:28:27 by machirin          #+#    #+#             */
/*   Updated: 2024/10/02 23:09:43 by m.chiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    if (!little || *little == '\0')
    {
        return (char *)big; // Retorna big si little es vacío
    }

    while (*big && len)
    {
        const char *b = big;
        const char *t = little;
        size_t remaining_len = len;

        // Compara mientras los caracteres coincidan y haya espacio
        while (*t && *b == *t && remaining_len)
        {
            b++;
            t++;
            remaining_len--;
        }

        // Si hemos llegado al final de little, hemos encontrado una coincidencia
        if (*t == '\0')
        {
            return (char *)big; // Retorna la coincidencia encontrada
        }

        big++; // Mover a la siguiente posición en big
        len--; // Decrementar el contador de longitud
    }

    return NULL; // No se encontró little en big
}
