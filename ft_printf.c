/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <mrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:50:33 by mrossett          #+#    #+#             */
/*   Updated: 2024/05/29 02:32:36 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_sign(int i, const char *str, va_list argc)
{
	int	j;

	j = 0;
	if (str[i] == 'c')
		j += ft_printchar(va_arg(argc, int));
	if (str[i] == 's')
		j += ft_printstr(va_arg(argc, char *));
	if (str[i] == 'p')
		j += ft_point(va_arg(argc, unsigned long), "0123456789abcdef");
	if (str[i] == 'd' || str[i] == 'i')
		j += ft_printdecimal(va_arg(argc, int));
	if (str[i] == 'u')
		j += ft_printundecimal(va_arg(argc, unsigned int));
	if (str[i] == 'x')
		j += ft_printpoint(va_arg(argc, unsigned int), "0123456789abcdef");
	if (str[i] == 'X')
		j += ft_printpoint(va_arg(argc, unsigned int), "0123456789ABCDEF");
	if (str[i] == '%')
		j += ft_printchar('%');
	return (j);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		j;
	va_list	argc;

	i = 0;
	j = 0;
	va_start(argc, str);
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] == '%')
		{
			j += ft_sign(i + 1, str, argc);
			i++;
		}
		else
			j += ft_printchar(str[i]);
		i++;
	}
	va_end(argc);
	return (j);
}
