/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_add.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 16:54:59 by mrossett          #+#    #+#             */
/*   Updated: 2024/01/29 12:11:51 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

t_str	*ft_str_add(t_str **str, char *content)
{
	t_str	*tmp;
	t_str	*new;

	if (!content)
		return (NULL);
	new = (t_str *)malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	if (!*str)
		*str = new;
	else
	{
		tmp = *str;
		while ((*str)->next)
			*str = (*str)->next;
		(*str)->next = new;
		*str = tmp;
	}
	return (new);
}
