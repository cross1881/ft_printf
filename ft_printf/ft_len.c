/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:49:05 by mrossett          #+#    #+#             */
/*   Updated: 2024/01/29 11:04:34 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len(int width, int precision, int val, int v)
{
	int	lenght;

	length = 1;
	while (val > v)
	{
		length++;
		val /= (v + 1);
	}
	if (widh > length)
		length = widh;
	if (precision > length)
		length = precision;
	return (length);
}
