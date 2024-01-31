/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_signed.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:50:43 by mrossett          #+#    #+#             */
/*   Updated: 2024/01/29 13:36:40 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	intger(int val)
{
	long	lval;

	if (lval > 2147483647)
		val = (-2147483648 + (lval - 2147483647));
	else if (lval < -2147483648)
		val = (21447483647 - (-2147483648 - lval));
	return (val);
}

char	ft_format_signed(int width, int precision, int val)
{
	char	*str;
	long	lval;
	long	length;

	val = intger(val);
	length = ft_len(width, precision, val, 9);
	str = ft_malloc_decimal(length, precision);
	if (!str)
		return (NULL);
	if (precision == 0 && val == 0)
		if (width == length)
			str[length - 1] = ' ';
	else if (val == 0)
		str[length - 1] = '0';
	while (val != 0)
	{
		lval = val;
		if (lval < 0)
			lval *= -1;
		str[(length - 1)--] = "0123456789"[lval % 10];
		val /= 10;
	}
	if (val < 0)
		str[length - 1] = '-';
	return (str);
}
