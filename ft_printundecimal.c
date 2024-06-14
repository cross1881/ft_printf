/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printundecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <mrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:40:00 by mrossett          #+#    #+#             */
/*   Updated: 2024/05/28 21:24:24 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printundecimal(unsigned int n)
{
	int	i;

	i = 0;
	if (n > 9)
		i += ft_printundecimal(n / 10);
	i += ft_printchar(n % 10 + '0');
	return (i);
}
