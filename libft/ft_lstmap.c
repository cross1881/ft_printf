/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrossett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:26:44 by mrossett          #+#    #+#             */
/*   Updated: 2024/03/08 20:59:35 by mrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*seclst;
	t_list	*newlist;

	if (!lst || !f || !del)
		return (NULL);
	seclst = ft_lstnew((*f)(lst->content));
	lst = lst->next;
	while (lst)
	{
		newlist = ft_lstnew((*f)(lst->content));
		ft_lstadd_back(&seclst, newlist);
		lst = lst->next;
	}
	return (seclst);
}
