/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualexan <gualexan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:57:27 by gualexan          #+#    #+#             */
/*   Updated: 2024/04/11 17:35:55 by gualexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		focus;
	size_t				i;

	p = (const unsigned char *)s;
	focus = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (p[i] == focus)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}
