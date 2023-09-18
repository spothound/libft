/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnavarro <fnavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 12:03:40 by fnavarro          #+#    #+#             */
/*   Updated: 2023/09/16 12:17:01 by fnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note: 'A' is 101 and 'a' is 141, the difference is 40
// to conver a into A you have to remove 40 to the decimal value
// the same for any other letter

#include "libft.h"

int	ft_toupper(int c)
{
	int	diff;

	if (ft_islower(c))
	{
		diff = 'a' - 'A';
		return (c - diff);
	}
	return (c);
}
