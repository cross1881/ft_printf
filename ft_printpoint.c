/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpoint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <mrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 21:04:29 by mrossett          #+#    #+#             */
/*   Updated: 2024/04/03 15:59:38 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printpoint(size_t p, int i, char *hex)
{
	char	x[8];
	int		j;

	j = 2;
	ft_printchar('0', i);
	ft_printchar('x', i);
	if (p == 0)
		return(ft_printchar('0', i));
	while (p != 0)
	{
		x[j] = hex[p % 16];
		p /= 16;
		j++;
	}
	while (j)
	{
		ft_printchar(x[j], i);
		j--;
	}
	return (i);
}
