/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:30:05 by mrossett          #+#    #+#             */
/*   Updated: 2024/03/08 22:02:32 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;

	if (!dst && !src)
		return (NULL);
	d = (char *)dst;
	s = (char *)src;
	while (n)
	{
		n--;
		d[n] = s[n];
	}
	return (d);
}
