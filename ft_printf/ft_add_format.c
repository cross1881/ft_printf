/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 12:35:22 by mrossett          #+#    #+#             */
/*   Updated: 2024/01/31 13:10:45 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_add_format(t_str **str, char *flags, char d, va_list *args)
{
	char	*mat;
	int		width;
	int		precision;
	int		fla;

	if (!flags)
		return (NULL);
	fla = ft_parse_flags(flags, &width, &precision);
	if (!fla)
		return (ft_do_free(flags));
	if (d == 'd')
		mat = ft_format_signed(width, precision, va_arg(*args, int));
	else if (d == 'x')
		mat = ft_format_hex(width, precision, va_arg(*args, unsigned int));
	else if (d == 's')
		mat = ft_format_str(width, precision, va_arg(*args, char));
	else
		mat = ft_format_missing(flags, d);
	free(flags);
	if (!mat)
		return (NULL);
	if (!ft_str_add(str, mat))
		return (NULL);
	return (1);
}
