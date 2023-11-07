/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnavarro <fnavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:46:51 by fnavarro          #+#    #+#             */
/*   Updated: 2023/11/05 10:51:38 by fnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*ptr;

	if (!lst || !del)
		return (0);
	newlist = ft_lstnew((*f)(lst->content));
	if (!newlist)
	{
		ft_lstclear(&newlist, del);
		return (0);
	}
	ptr = newlist;
	lst = lst->next;
	while (lst)
	{
		ptr->next = ft_lstnew((*f)(lst->content));
		if (!ptr->next)
		{
			ft_lstclear(&newlist, del);
			return (0);
		}
		ptr = ptr->next;
		lst = lst->next;
	}
	return (newlist);
}
