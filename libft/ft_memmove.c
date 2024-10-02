/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m.chiri <m.chiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:24:57 by m.chiri           #+#    #+#             */
/*   Updated: 2024/10/03 00:25:30 by m.chiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
void *ft_memmove (void *dest_str, const void *src_str, size_t len) 
{ 
    unsigned char* dest = dest_str;
    const unsigned char* src = src_str;
    
    if (dest < src)
    {
        while(len--)
        {
            *dest++ = *src++;
        }
    }else
    {
        while(len--)
        {
            dest[len] = src[len];
        }
    }

    return dest_str; 

}