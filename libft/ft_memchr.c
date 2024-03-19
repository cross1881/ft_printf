/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:06:19 by mrossett          #+#    #+#             */
/*   Updated: 2024/03/08 21:42:26 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	if (!s && !c && !n)
		return (NULL);
	while (n)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((char *)s);
		n--;
		s++;
	}
	return (NULL);
}
