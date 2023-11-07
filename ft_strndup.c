/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnavarro <fnavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:56:29 by fnavarro          #+#    #+#             */
/*   Updated: 2023/11/01 12:58:50 by fnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t max_size)
{
	size_t	str_len;
	char	*ptr;

	str_len = ft_strlen(s1);
	if (str_len > max_size)
		str_len = max_size;
	ptr = malloc(str_len + 1);
	if (!ptr)
		return (NULL);
	ft_memmove(ptr, s1, str_len);
	ptr[str_len] = '\0';
	return (ptr);
}
