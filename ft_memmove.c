/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnavarro <fnavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:01:16 by fnavarro          #+#    #+#             */
/*   Updated: 2023/09/17 12:48:08 by fnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The issue is when dst and src overlap and dst is AFTER scr
	if this happens, when you write in dst you are overwritting src
	before it can be copied to dst and the result won't make sense.

	If we copy backwards the problem should go.
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*ptr;

	if (!dst && !src)
		return (0);
	ptr = dst;
	ptr = ptr + len - 1;
	src = src + len - 1;
	while (len--)
	{
		*(char *)ptr-- = *(char *)src--;
	}
	return (dst);
}
