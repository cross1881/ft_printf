/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <mrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:50:33 by mrossett          #+#    #+#             */
/*   Updated: 2024/03/19 16:46:22 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == 'c')
				i += ft_printchar(va_arg(args, char), i);
			else if (*str == 's')
				i += ft_printstr(va_arg(args, char *), i);
			else if (*str == 'p')
				i += ft_printpoint(va_arg(args, size_t), i,
						"0123456789abcdef");
			else if (*str == 'd')
				i += ft_printdecimal(va_arg(args, int), i);
			else if (*str == 'i')
				i += ft_printdecimal(va_arg(args, int), i);
			else if (*str == 'u')
				i += ft_printunsigend(va_arg(args, unsigned int), i);
			else if (*str == 'x')
				i += ft_printesadecimal(va_arg(args, size_t), i,
						"0123456789abcdef");
			else if (*str == 'X')
				i += ft_printbigesadecimal(va_arg(args, size_t), i,
						"0123456789ABCDEF");
			else if (*str == '%')
				i += ft_printchar(va_arg(args, char), i);
		}
		else
			ft_putchar(*str, 1);
		str++;
		i++;
	}
	va_end(args);
	return (i);
}


