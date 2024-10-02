/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m.chiri <m.chiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:00:47 by machirin          #+#    #+#             */
/*   Updated: 2024/10/02 23:08:08 by m.chiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c) {
    char *last_time = NULL;

    // Manejar puntero nulo
    if (!s) {
        return NULL;
    }

    while (*s != '\0') {
        if (*s == (char)c) {
            last_time = (char *)s;
        }
        s++;
    }
    // Manejar caso donde c es el carácter nulo
    if ((char)c == '\0') {
        return (char *)s; // Retorna el puntero al final de la cadena
    }
    return last_time; // Retorna la última ocurrencia de c
}
