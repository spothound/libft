/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnavarro <fnavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 20:34:17 by fnavarro          #+#    #+#             */
/*   Updated: 2023/10/24 21:33:02 by fnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	str_len;
	char	*ptr;

	str_len = ft_strlen(s1);
	ptr = malloc(str_len + 1);
	if (!ptr)
		return (NULL);
	ft_memmove(ptr, s1, str_len);
	ptr[str_len] = '\0';
	return (ptr);
}
