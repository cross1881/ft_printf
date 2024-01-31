/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_write.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:38:52 by mrossett          #+#    #+#             */
/*   Updated: 2024/01/26 17:45:50 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_str_write(t_str *str)
{
	int	total;
	int	length;

	total = 0;
	while (str)
	{
		length = ft_strlen(str->content);
		total += length;
		if (length > 0)
			write(1, str->content, length);
		str = str->next;
	}
	return (total);
}
