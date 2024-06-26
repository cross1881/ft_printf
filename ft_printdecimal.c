/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdecimal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <mrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 22:39:21 by mrossett          #+#    #+#             */
/*   Updated: 2024/05/29 02:17:54 by mrossett         ###   ########.fr       */
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
		i += ft_printchar('-');
		n = -n;
	}
	if (n > 9)
		i += ft_printdecimal(n / 10);
	i += ft_printchar(n % 10 + '0');
	return (i);
}
