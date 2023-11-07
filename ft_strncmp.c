/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnavarro <fnavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:28:03 by fnavarro          #+#    #+#             */
/*   Updated: 2023/11/01 12:22:39 by fnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_truncate_sign(int n)
{
	if (n > 0)
		return (1);
	if (n < 0)
		return (-1);
	return (0);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
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
	while (compared < n - 1 && *ptr1 != '\0' && *ptr2 != '\0')
	{
		if (diff != 0)
			return (ft_truncate_sign(diff));
		ptr1++;
		ptr2++;
		compared++;
		diff = *ptr1 - *ptr2;
	}
	return (ft_truncate_sign(diff));
}
