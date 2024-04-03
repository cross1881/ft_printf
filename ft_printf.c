/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <mrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:50:33 by mrossett          #+#    #+#             */
/*   Updated: 2024/04/03 15:53:43 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_sign(const char *str, int i, va_list args)
{
	if (*str == 'c')
		i += ft_printchar(va_arg(args, int), i);
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
		i += ft_printunsigned(va_arg(args, unsigned int), i);
	else if (*str == 'x')
		i += ft_printesadecimal(va_arg(args, size_t), i,
				"0123456789abcdef");
	else if (*str == 'X')
		i += ft_printesadecimal(va_arg(args, size_t), i,
				"0123456789ABCDEF");
	else if (*str == '%')
		i += ft_printchar('%', i);
}

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
			ft_sign(str, i, args);
		}
		else
			ft_printchar(*str, i);
		str++;
	}
	va_end(args);
	return (i);
}
