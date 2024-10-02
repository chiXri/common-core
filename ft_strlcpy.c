/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m.chiri <m.chiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:18:21 by machirin          #+#    #+#             */
/*   Updated: 2024/10/02 23:18:35 by m.chiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t src_len;

	// Manejar punteros nulos
	if (!dest || !src)
	{
		return 0;
	}

	// Calcular la longitud de src
	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}

	// Si n es 0, solo retorna la longitud de src
	if (n == 0)
	{
		return src_len;
	}

	// Copiar hasta n-1 caracteres y agregar el nulo al final
	size_t i = 0;
	while (i < n - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0'; // Asegurarse de que dest está nulo terminado

	return src_len; // Retornar la longitud de src
}
