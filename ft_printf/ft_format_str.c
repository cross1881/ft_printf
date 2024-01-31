/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:12:57 by mrossett          #+#    #+#             */
/*   Updated: 2024/01/31 11:24:11 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	lim(int width, int precision, int length)
{
	int	limit;

	if (precision > 0 && length < precision)
		limit = precision;
	else
		limit = length;
	return (limit);
}

int	j(int width, int length)
{
	int	i;

	if (width == length)
		i = length - lim(width, precision, length);
	else
		i = 0;
	return (i);
}

char	*copy(int width, int precision, int length, char *cpy)
{
	if (width > 0 && (precision == 0 || length == 0))
	{
		cpy[width] = 0;
		return (cpy);
	}
	else if (precision == 0)
	{
		cpy[0] = 0;
		return (cpy);
	}
}

char	*ft_format_str(int width, int precision, char *str)
{
	char	*cpy;
	int		length;
	int		i;

	if (!str)
		str = NULL;
	length = ft_strlen(str);
	if (width > length || (precision >= 0 && width > precision))
		length = width;
	cpy = (char *)malloc(sizeof(*cpy) * (length + 1));
	if (!cpy)
		return (NULL);
	i = 0;
	while (i < lenght)
		cpy[i++] = ' ';
	cpy[i] = 0;
	i = 0;
	if (copy(width, precision, length, cpy))
		return (cpy);
	while (i < lim(width, precision, lenght))
		cpy[j(width, length)++] = str[i++];
	cpy[j(width, length)] = 0;
	return (cpy);
}
