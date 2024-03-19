/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 11:59:24 by mrossett          #+#    #+#             */
/*   Updated: 2024/03/08 22:33:20 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nxt;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		nxt = (*lst)->next;
		(*del)((*lst)->content);
		free(*lst);
		*lst = nxt;
	}
}
