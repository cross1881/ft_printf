/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdecimal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <mrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 22:39:21 by mrossett          #+#    #+#             */
/*   Updated: 2024/03/12 22:50:01 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printdecimal(int n, int i)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		ft_printchar(45, i);
		n *= -1;
        i++;
	}
	if (n > 9)
    {
		ft_printdecimal(n / 10, i++);
    }
	ft_printchar(n % 10 + 48, i);
    i++;
    return (i);
}
