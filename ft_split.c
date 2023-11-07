/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnavarro <fnavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:40:08 by fnavarro          #+#    #+#             */
/*   Updated: 2023/11/04 18:37:59 by fnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_c(char const *s, char c)
{
	int		count;

	count = 0;
	while (*s != '\0')
	{
		while (*s == c && *s != '\0')
			s++;
		if (*s != c && *s != '\0')
			count++;
		while (*s != c && *s != '\0')
			s++;
	}
	return (count);
}

char const	*ft_get_next_word(char **result_array, int i, char const *s, char c)
{
	int			word_end_idx;
	char const	*ptr;

	word_end_idx = 0;
	while (*s == c)
		s++;
	ptr = s;
	while (*ptr != c && *ptr != '\0')
	{
		word_end_idx++;
		ptr++;
	}
	result_array[i] = malloc(word_end_idx + 1);
	if (!result_array[i])
		exit(EXIT_FAILURE);
	ft_memmove(result_array[i], s, word_end_idx);
	result_array[i][word_end_idx] = '\0';
	return (++ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**result_array;
	int		words_count;
	int		i;

	i = 0;
	words_count = ft_count_c(s, c);
	result_array = malloc((words_count + 1) * sizeof(char *));
	if (!result_array)
		return (NULL);
	while (i < words_count)
	{
		s = ft_get_next_word(result_array, i, s, c);
		i++;
	}
	result_array[i] = NULL;
	return (result_array);
}
