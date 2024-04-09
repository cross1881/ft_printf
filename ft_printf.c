/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <mrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:50:33 by mrossett          #+#    #+#             */
/*   Updated: 2024/04/05 17:53:29 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_sign(const char *str, int *i, va_list args)
{
	if (*str == 'c')
		return (ft_printchar(va_arg(args, int)));
	else if (*str == 's')
		return (ft_printstr(va_arg(args, char *)));
	else if (*str == 'p')
		return (ft_printpoint(va_arg(args, size_t), "0123456789abcdef"));
	else if (*str == 'd' || *str == 'i')
		return (ft_printdecimal(va_arg(args, int)));
	else if (*str == 'u')
		return (ft_printunsigned(va_arg(args, unsigned int)));
	else if (*str == 'x')
		return (ft_printesadecimal(va_arg(args, size_t), "0123456789abcdef"));
	else if (*str == 'X')
		return (ft_printesadecimal(va_arg(args, size_t), "0123456789ABCDEF"));
	else if (*str == '%')
		return (ft_printchar('%'));
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			count += ft_sign(str, &i, args);
		}
		else
			count += ft_printchar(*str);
		str++;
	}
	va_end(args);
	return (count);
}
