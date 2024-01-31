/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_clear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:55:56 by mrossett          #+#    #+#             */
/*   Updated: 2024/01/26 17:59:24 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_str_clear(t_str **str)
{
	t_str	*next;

	while (*str)
	{
		next = (*str)->next;
		free((*str)->content);
		free(*str);
		*str = next;
	}
	return (0);
}
