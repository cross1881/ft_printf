/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <mrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:40:00 by mrossett          #+#    #+#             */
/*   Updated: 2024/04/05 17:32:20 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsigned(unsigned int n)
{
	int	i;

	i = 0;
	if (n > 9)
		i += ft_printunsigned(n / 10);
	ft_printchar(n % 10 + 48);
	i++;
	return (i);
}
