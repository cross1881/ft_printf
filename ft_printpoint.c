/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpoint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <mrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 21:04:29 by mrossett          #+#    #+#             */
/*   Updated: 2024/05/29 02:12:37 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printpoint(unsigned long long n, char *hex)
{
	int	i;

	i = 0;
	if (n >= 16)
		i += ft_printpoint(n / 16, hex);
	i += ft_printchar(hex[n % 16]);
	return (i);
}

int	ft_point(unsigned long n, char *hex)
{
	int	i;

	i = 0;
	if (n == 0)
		return (ft_printstr("(nil)"));
	i += ft_printstr("0x");
	i += ft_printpoint(n, hex);
	return (i);
}
