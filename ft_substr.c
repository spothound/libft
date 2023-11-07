/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnavarro <fnavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 20:42:59 by fnavarro          #+#    #+#             */
/*   Updated: 2023/11/01 12:58:00 by fnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	new_len;

	if (!s)
		return (NULL);
	new_len = ft_strlen(s);
	if (start > new_len)
		return (ft_strdup(""));
	new_len = new_len - start;
	if (new_len > len)
		new_len = len;
	return (ft_strndup(&s[start], new_len));
}
