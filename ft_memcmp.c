/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnavarro <fnavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:51:12 by fnavarro          #+#    #+#             */
/*   Updated: 2023/09/17 12:26:34 by fnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			compared;
	int				diff;

	if (n <= 0)
		return (0);
	compared = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	diff = *ptr1 - *ptr2;
	while (compared < n - 1)
	{
		if (diff != 0)
			return (truncate_sign(diff));
		ptr1++;
		ptr2++;
		compared++;
		diff = *ptr1 - *ptr2;
	}
	return (truncate_sign(diff));
}
