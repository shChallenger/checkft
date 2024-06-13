/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_ncmp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 02:39:15 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/03 22:34:26 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../str.h"

int	str_ncmp(const char *str, const char *str2, size_t n)
{
	if (!n)
		return (0);
	while (*str == *str2 && *str && --n)
	{
		str += 1;
		str2 += 1;
	}
	return ((unsigned char) *str - (unsigned char) *str2);
}
