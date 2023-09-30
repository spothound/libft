/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnavarro <fnavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 11:43:26 by fnavarro          #+#    #+#             */
/*   Updated: 2023/09/30 12:23:20 by fnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		output;
	int		sign;
	char	*ptr;

	output = 0;
	sign = 1;
	ptr = (char *)str;
	while (ft_isspace(*ptr))
		ptr++;
	if (*ptr == '-')
		sign = -1;
	if (*ptr == '+' || *ptr == '-')
		ptr++;
	while (ft_isdigit(*ptr))
	{
		output = output * 10 + (*ptr - '0');
		ptr++;
	}
	return (sign * output);
}
