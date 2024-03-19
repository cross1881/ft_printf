/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:38:43 by mrossett          #+#    #+#             */
/*   Updated: 2024/03/09 00:11:38 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	int		len;

	len = 0;
	if (!s1 || !set)
		return (NULL);
	while ((*s1 && ft_strchr(set, *s1)))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len]))
		len--;
	return (ft_substr(s1, 0, len + 1));
}
