/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnavarro <fnavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:24:21 by fnavarro          #+#    #+#             */
/*   Updated: 2023/11/04 15:50:45 by fnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		init_idx;
	int		end_idx;
	int		result_len;
	char	*result;

	if (s1 == NULL || set == NULL)
		return (NULL);
	init_idx = 0;
	end_idx = ft_strlen(s1) - 1;
	if (end_idx == -1)
		return (ft_strdup("\0"));
	while (ft_strchr(set, s1[init_idx]) != 0 && init_idx <= end_idx)
		init_idx++;
	if (init_idx > end_idx)
		return (ft_strdup("\0"));
	while (ft_strchr(set, s1[end_idx]) != 0 && end_idx > init_idx)
		end_idx--;
	result_len = end_idx - init_idx + 2;
	result = malloc(result_len);
	if (result == 0)
		return (0);
	ft_memmove(result, &s1[init_idx], result_len - 1);
	result[result_len - 1] = 0;
	return (result);
}
