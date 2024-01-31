/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_decimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:41:10 by mrossett          #+#    #+#             */
/*   Updated: 2024/01/31 11:26:33 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

char	ft_malloc_decimal(int length, int precision)
{
	char	*str;
	int		i;

	str = (char *)malloc(sizeof(*str) * (length + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < length)
	{
		if (precision >= 0 && length - i <= precision)
			str[i] = '0';
		else
			str[i] = ' ';
		i++;
	}
	str[i] = 0;
	return (str);
}
