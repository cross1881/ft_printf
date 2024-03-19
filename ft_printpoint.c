/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpoint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <mrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 21:04:29 by mrossett          #+#    #+#             */
/*   Updated: 2024/03/18 17:47:49 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printpoint(size_t p, int i, char *hex)
{
	char	x[10];
	int	j;

	j = 2;
	x[0] = '0';
	x[1] = 'x';
	if (p == 0)
	{
		ft_printchar((char)p, i);
		return (i);
	}
	while (x[j])
	{
		while (p != 0)
			x[j] = hex[p % 16];
			p /= 16;
		j++;
	}
	i = j;
	while (j)
	{
		ft_printchar(x[j], i);
		j--;
	}
	return (i);
}	
