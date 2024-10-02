/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m.chiri <m.chiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:24:57 by m.chiri           #+#    #+#             */
/*   Updated: 2024/10/02 23:30:43 by m.chiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

*ft_memmove(void *dest_str, const void *src_str, size_t len)
{
    unsigned char *devoist = (unsigned char *)dest_str;
    const unsigned char *src = (const unsigned char *)src_str;

    // Comprobar si hay punteros nulos o longitud cero
    if (len == 0 || dest == src)
    {
        return dest_str;
    }

    // Si se solapan, asegurarse de copiar de atrás hacia adelante
    if (dest < src)
    {
        while (len--)
        {
            *dest++ = *src++;
        }
    }
    else
    {
        // Copiar de derecha a izquierda
        dest += len; // Ajustar el puntero de destino
        src += len;  // Ajustar el puntero de origen
        while (len--)
        {
            *(--dest) = *(--src);
        }
    }

    return dest_str;
}

