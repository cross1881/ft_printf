/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:28:11 by mrossett          #+#    #+#             */
/*   Updated: 2024/03/08 21:31:33 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	if (dst > src)
		return (ft_memcpy(dst, src, n));
	else
	{
		while (n)
		{
			n--;
			*(char *)(dst + i) = *(char *)src;
			i++;
			src++;
		}
	}
	return (dst);
}
