/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpoint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <mrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 21:04:29 by mrossett          #+#    #+#             */
/*   Updated: 2024/04/09 15:04:54 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printpoint(size_t p, char *hex)
{
	int		i;
	int		j;
	char	x[8];

	i = 2;
	j = 0;
	if (p == 0)
		return (ft_printstr("(nil)"));
	ft_printstr("0x");
	while (p != 0)
	{
		x[j] = hex[p % 16];
		p /= 16;
		j++;
	}
	while (j)
	{
		j--;
		ft_printchar(x[j]);
		i++;
	}
	return (i);
}
