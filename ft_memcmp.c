/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnavarro <fnavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:51:12 by fnavarro          #+#    #+#             */
/*   Updated: 2023/09/18 20:05:52 by fnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	diff;

	if (n <= 0)
		return (0);
	while (n--)
	{
		diff = *(unsigned char *)s1 - *(unsigned char *)s2;
		if (diff)
			return (truncate_sign(diff));
		s1++;
		s2++;
	}
	return (0);
}
