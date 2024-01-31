/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_missing.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:31:57 by mrossett          #+#    #+#             */
/*   Updated: 2024/01/31 11:39:09 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

char	*ft_format_missing(char const *flags, char format)
{
	char	*str;
	int		length;
	int		i;
	int		j;

	length = ft_strlen(flags) + 2;
	str = (char *)malloc(sizeof(*str) * (length + 1));
	if (!str)
		return (NULL);
	i = 0;
	str[i++] = '%';
	j = 0;
	while (flags[j])
		str[i++] = flags[i++];
	str[i++] = format;
	str[i] = 0;
	return (str);
}
