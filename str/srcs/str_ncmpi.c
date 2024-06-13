/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_ncmpi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 02:39:15 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/10 00:45:21 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../str.h"

int	str_ncmpi(const char *str, const char *str2, size_t n)
{
	if (!n)
		return (0);
	while (to_upper(*str) == to_upper(*str2) && *str && --n)
	{
		str += 1;
		str2 += 1;
	}
	return ((unsigned char) *str - (unsigned char) *str2);
}
