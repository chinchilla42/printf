/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cregazzo <cregazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 15:24:54 by cregazzo          #+#    #+#             */
/*   Updated: 2020/12/08 17:17:29 by cregazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *element;
	t_list *previous;
	t_list *new;

	element = NULL;
	if (lst)
	{
		if (!(element = ft_lstnew((*f)(lst->content))))
			return (NULL);
		previous = element;
		lst = lst->next;
		while (lst)
		{
			if (!(new = ft_lstnew((*f)(lst->content))))
			{
				ft_lstclear(&element, del);
				return (NULL);
			}
			previous->next = new;
			previous = new;
			lst = lst->next;
		}
	}
	return (element);
}
