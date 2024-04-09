/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdecimal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <mrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 22:39:21 by mrossett          #+#    #+#             */
/*   Updated: 2024/04/05 17:26:10 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printdecimal(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (ft_printstr("-2147483648"));
	if (n < 0)
	{
		i++;
		ft_printchar(45);
		n *= -1;
	}
	if (n >= 10)
		i += ft_printdecimal(n / 10);
	ft_printchar(n % 10 + 48);
	i++;
	return (i);
}
