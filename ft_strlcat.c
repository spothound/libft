/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnavarro <fnavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 11:54:42 by fnavarro          #+#    #+#             */
/*   Updated: 2023/10/23 20:09:35 by fnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_idx;
	size_t	src_idx;

	dst_idx = 0;
	src_idx = 0;
	while (dst[dst_idx] && dst_idx < dstsize)
		dst_idx++;
	if (dst_idx == dstsize && dst[dst_idx])
		return (dst_idx + ft_strlen(src));
	while (src[src_idx] && (dst_idx + src_idx + 1) < dstsize)
	{
		dst[dst_idx + src_idx] = src[src_idx];
		src_idx++;
	}
	if (dstsize != 0)
		dst[dst_idx + src_idx] = '\0';
	return (dst_idx + ft_strlen(src));
}
