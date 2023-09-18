/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnavarro <fnavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:34:28 by fnavarro          #+#    #+#             */
/*   Updated: 2023/09/18 20:11:35 by fnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*  Like snprintf(3), the strlcpy() function returns...
	...the total length of the string they tried to create.
	That means the length of src. 
	If the return value is >= dstsize, output has been truncated.
	It is the caller's responsibility to handle this. */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	copied;

	copied = 0;
	while (*src && copied < dstsize - 1)
	{
		*dst++ = *src++;
		copied++;
	}
	*dst = '\0';
	while (*src)
	{
		src++;
		copied++;
	}
	return (copied);
}
