/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:16:08 by mrossett          #+#    #+#             */
/*   Updated: 2024/01/31 15:37:49 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	cose(char const *str, int start, int length, va_list args, t_str *s)
{
	int i;

	i = 0;
	start = i;
	while (i < length && str[i] != '%')
	{
		i++;
		if (i - start > 0 && !ft_str_add(&s, ft_substr(str, start, i - start)))
			return (ft_clear_all(&s, (va_list *)&args));
		if (str[i] == '%' && (start == ++i) && i < length)
		{
			while (ft_in_set(str[i], "0123456789"))
				i++;
			if (!ft_add_format(&s, ft_substr(str, start, i - start),
					str[i], (va_list *)&args))
				return (ft_clear_all(&s,(va_list *) &args));
			i++;
		}
	}
	return (i);
}

int	ft_printf(char const *str, ...)
{
	t_str	*s;
	int		i;
	int		start;
	int		length;
	va_list	args;

	s = NULL;
	start = 0;
	if (!str)
		return (0);
	va_start(args, str);
	length = ft_strlen(str);
	if (cose(str, start, length, args, s))
		return (cose(str, start, length, args, s));
	i = ft_str_write(s);
	ft_clear_all(&s, &args);
	return (i);
}
