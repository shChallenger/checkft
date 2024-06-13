/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_cmpi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 00:35:01 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/10 00:45:51 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../str.h"

int	str_cmpi(const char *str, const char *str2)
{
	while (to_upper(*str) == to_upper(*str2) && *str)
	{
		str += 1;
		str2 += 1;
	}
	return ((unsigned char)*str - (unsigned char)*str2);
}
