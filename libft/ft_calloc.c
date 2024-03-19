/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:53:53 by mrossett          #+#    #+#             */
/*   Updated: 2024/03/05 10:57:24 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;
	size_t	len;

	len = count * size;
	if (len > 2147483647 || count + size < size
		|| count + size < count)
		return (NULL);
	str = malloc(len);
	if (!str)
		return (NULL);
	ft_bzero(str, len);
	return (str);
}
