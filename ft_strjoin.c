/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnavarro <fnavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 20:46:46 by fnavarro          #+#    #+#             */
/*   Updated: 2023/10/24 21:29:57 by fnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	size_t	l1;
	size_t	l2;
	char	*ptr;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	ptr = malloc(l1 + l2 + 1);
	if (!ptr)
		return (NULL);
	ft_memmove(ptr, s1, l1);
	ft_memmove(ptr + l1, s2, l2);
	ptr[l1 + l2] = '\0';
	return (ptr);
}
