/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnavarro <fnavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:37:57 by fnavarro          #+#    #+#             */
/*   Updated: 2023/09/18 20:13:13 by fnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*ptr;

	if (src == dst)
		return (dst);
	if (!dst && !src)
		return (0);
	ptr = dst;
	while (n--)
	{
		*(unsigned char *)ptr++ = *(unsigned char *)src++;
	}
	return (dst);
}
