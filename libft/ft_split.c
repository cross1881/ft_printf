/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:19:05 by mrossett          #+#    #+#             */
/*   Updated: 2024/03/08 19:43:44 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_count(const char *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c)
		{
			++count;
			while (s[i] && s[i] != c)
				++i;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**substring;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	substring = malloc(sizeof (char *) * (ft_count(s, c) + 1));
	i = 0;
	if (!substring)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			j = 0;
			while (*s && *s != c && ++j)
				++s;
			substring[i++] = ft_substr(s - j, 0, j);
		}
		else
			++s;
	}
	substring[i] = 0;
	return (substring);
}
