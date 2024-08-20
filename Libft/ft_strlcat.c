/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualexan <gualexan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:07:32 by gualexan          #+#    #+#             */
/*   Updated: 2024/05/16 16:50:37 by gualexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	if (dst == NULL)
		return (0);
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	while (src[i] && (dst_len + i + 1) < len)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dst_len < len)
		dst[dst_len + i] = '\0';
	if (len < dst_len)
		return (len + src_len);
	else
		return (dst_len + src_len);
}
