/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 19:09:36 by mrossett          #+#    #+#             */
/*   Updated: 2024/03/08 22:15:50 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!small[i])
		return ((char *)big);
	if (!len)
		return (NULL);
	while (big[i])
	{
		j = 0;
		while (big[i + j] == small[j] && (i + j) < len)
		{
			if (!small[j + 1])
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
