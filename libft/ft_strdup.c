/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 19:45:21 by mrossett          #+#    #+#             */
/*   Updated: 2024/03/04 14:54:44 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s2;

	s2 = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!s2)
		return (NULL);
	ft_memcpy(s2, s, ft_strlen(s));
	s2[ft_strlen(s)] = '\0';
	return (s2);
}
