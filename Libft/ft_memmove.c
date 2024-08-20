/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualexan <gualexan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:42:54 by gualexan          #+#    #+#             */
/*   Updated: 2024/05/16 16:49:12 by gualexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dst;
	const unsigned char	*source;
	size_t				i;

	dst = (unsigned char *)dest;
	source = (const unsigned char *)src;
	if (!src && !dest && n > 0)
		return (NULL);
	if (source < dst && source + n > dst)
	{
		while (n-- > 0)
			dst[n] = source[n];
	}
	else
	{
		i = -1;
		while (++i < n)
			dst[i] = source[i];
	}
	return (dst);
}
