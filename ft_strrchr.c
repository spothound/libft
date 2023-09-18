/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnavarro <fnavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:16:00 by fnavarro          #+#    #+#             */
/*   Updated: 2023/09/17 10:39:50 by fnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	*output;

	output = 0;
	ptr = (char *) s;
	while (*ptr != '\0')
	{
		if (*ptr == (char) c)
			output = ptr;
		ptr++;
	}
	if ((char) c == *ptr)
		output = ptr;
	return (output);
}
