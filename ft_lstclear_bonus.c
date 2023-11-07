/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnavarro <fnavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:40:15 by fnavarro          #+#    #+#             */
/*   Updated: 2023/11/04 19:00:01 by fnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*aux;

	if (!lst)
		return ;
	ptr = *lst;
	while (ptr)
	{
		aux = ptr->next;
		ft_lstdelone(ptr, del);
		ptr = aux;
	}
	*lst = NULL;
}
