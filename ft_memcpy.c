/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnavarro <fnavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:37:57 by fnavarro          #+#    #+#             */
/*   Updated: 2023/09/17 12:48:55 by fnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*ptr;

	if (!dst && !src)
		return (0);
	ptr = dst;
	while (n-- > 0)
	{
		*(char *)ptr++ = *(char *)src++;
	}
	return (dst);
}
