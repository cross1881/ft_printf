/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printesadecimal.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <mrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:55:54 by mrossett          #+#    #+#             */
/*   Updated: 2024/04/09 14:37:25 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printesadecimal(size_t n, char *hex)
{
	int		i;	
	char	x[8];
	int		j;

	i = 0;
	j = 0;
	if (n == 0)
		return (ft_printchar('0'));
	while (n != 0)
	{
		x[j] = hex[n % 16];
		n /= 16;
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
