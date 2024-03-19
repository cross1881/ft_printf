/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printesadecimal.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <mrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:55:54 by mrossett          #+#    #+#             */
/*   Updated: 2024/03/19 16:55:44 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printesadecimal(size_t n, int i, char *hex)
{
    char	x[8];
	int	j;

    j = 0;
 	{
		ft_printchar((char)n, i);
		return (i);
	}
	while (x[j])
	{
		while (n != 0)
			x[j] = hex[n % 16];
			n /= 16;
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