/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnavarro <fnavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 12:19:01 by fnavarro          #+#    #+#             */
/*   Updated: 2023/09/16 12:19:59 by fnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note: 'A' is 101 and 'a' is 141, the difference is 40
// to conver 'A' into 'a'' you have to add 40 to the decimal value
// the same for any other letter

#include "libft.h"

int	ft_lower(int c)
{
	int	diff;

	if (ft_islower(c))
	{
		diff = 'a' - 'A';
		return (c + diff);
	}
	return (c);
}
