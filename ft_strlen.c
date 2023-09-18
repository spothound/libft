/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnavarro <fnavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 10:49:18 by fnavarro          #+#    #+#             */
/*   Updated: 2023/09/16 11:08:30 by fnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t		len;
	const char	*ptr;

	len = 0;
	ptr = s;
	while (*ptr != '\0')
	{
		ptr++;
		len++;
	}
	return (len);
}
