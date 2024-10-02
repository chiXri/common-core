/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machirin <machirin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:34:24 by machirin          #+#    #+#             */
/*   Updated: 2024/10/02 18:29:55 by machirin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*cdest;
	const unsigned char	*csrc;

	if (!dest && !src)
	{
		return (0);
	}
	i = 0;
	cdest = (unsigned char *)dest;
	csrc = (const unsigned char *)src;
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (dest);
}
