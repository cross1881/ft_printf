/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:28:42 by mrossett          #+#    #+#             */
/*   Updated: 2024/03/08 21:57:16 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	if ((!dst || !src) && !dstsize)
		return (0);
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	i = dlen;
	if (dlen >= dstsize)
		return (dstsize + slen);
	while (dlen < dstsize - 1 && *src)
	{
		*(dst + dlen) = *src;
		dlen++;
		src++;
	}
	*(dst + dlen) = '\0';
	return (i + slen);
}
