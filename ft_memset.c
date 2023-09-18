/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnavarro <fnavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:32:28 by fnavarro          #+#    #+#             */
/*   Updated: 2023/09/17 11:31:59 by fnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	void	*ptr;
	size_t	i;

	ptr = b;
	i = len;
	while (i-- > 0)
	{
		*(char *)ptr++ = (unsigned char) c;
	}
	return (b);
}
