/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printesadecimal.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <mrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:55:54 by mrossett          #+#    #+#             */
/*   Updated: 2024/04/03 15:57:29 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printesadecimal(size_t n, int i, char *hex)
{
	char	x[8];
	int		j;

	j = 0;
	if (n == 0)
		return (ft_printchar('0', i));
	while (n != 0)
	{
		x[j] = hex[n % 16];
		n /= 16;
		j++;
	}
	while (j)
	{
		j--;
		ft_printchar(x[j], i);
	}
	return (i);
}
