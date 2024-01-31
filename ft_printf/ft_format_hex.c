/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:01:46 by mrossett          #+#    #+#             */
/*   Updated: 2024/01/31 11:25:26 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_format_hex(int width, int precision, int val)
{
	int		length;
	char	*str;
	int		i;

	length = ft_len(width, precision, val, 15);
	str = malloc_decial(length, precision);
	if (!str)
		return (NULL);
	if (precision == 0 && val == 0)
	{
		if (width == length)
			str[length - 1] = ' ';
	}
	else if (val == 0)
		str[length - 1] = '0';
	i = length - 1;
	while (val != 0)
	{
		str[i--] = "0123456789abcdef"[val % 16];
		val /= 16;
	}
	return (str);
}
