/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_swith.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 00:07:17 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/10 05:17:14 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../str.h"

t_bool	str_swith(const char *str, const char *pattern)
{
	if (!str || !pattern)
		return (0);
	while (*pattern)
	{
		if (*str++ != *pattern++)
			return (0);
	}
	return (1);
}
