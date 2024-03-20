/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <mrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:40:00 by mrossett          #+#    #+#             */
/*   Updated: 2024/03/20 09:57:55 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsigned(unsigned int n, int i)
{
	if (n > 9)
	{
		ft_printdecimal(n / 10, i++);
	}
	ft_printchar(n % 10 + 48, i);
	i++;
	return (i);
}
