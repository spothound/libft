/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnavarro <fnavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 11:54:42 by fnavarro          #+#    #+#             */
/*   Updated: 2023/09/30 12:39:57 by fnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*  Like snprintf(3), the strlcpy() function returns...
	...the total length of the string they tried to create.
	That means the length of src. 
	If the return value is >= dstsize, output has been truncated.
	It is the caller's responsibility to handle this. */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	while (*dst)
		dst++;
	while (*src && dst_len + 1 < dstsize)
	{
		*dst++ = *src++;
		dst_len++;
	}
	if (dstsize > 0)
		*dst = '\0';
	return (src_len + dst_len);
}
