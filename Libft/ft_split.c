/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualexan <gualexan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:16:19 by gualexan          #+#    #+#             */
/*   Updated: 2024/06/05 18:12:48 by gualexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s && *s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static void	ft_free_split(char **split)
{
	size_t	i;

	if (split)
	{
		i = 0;
		while (split[i])
		{
			free(split[i]);
			i++;
		}
		free(split);
	}
}

static void	ft_paste_words(char *s, char **result, char c)
{
	size_t		i;
	const char	*start;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			start = s;
			while (*s && *s != c)
				s++;
			result[i] = ft_substr(start, 0, s - start);
			if (!result[i])
			{
				ft_free_split(result);
				return ;
			}
			i++;
		}
		else
			s++;
	}
}

char	**ft_split(const char *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = ft_calloc(ft_count_words(s, c) + 1, sizeof(char *));
	if (!result)
		return (NULL);
	ft_paste_words((char *)s, result, c);
	return (result);
}
/*int	main(void)
{
	char str[] = "Hello, this is a test string.";
	char delimiter = ' ';
	char **result;
	size_t i;

	result = ft_split(str, delimiter);

	if (!result)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	i = 0;
	while (result[i])
	{
		printf("Word %zu: %s\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);

	return (0);
}*/