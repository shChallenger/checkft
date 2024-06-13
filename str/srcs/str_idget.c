/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_idget.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 00:46:57 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/10 05:19:12 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../str.h"

int	str_idget(const char *str, const char *pattern,
	t_bool (*eq)(const char *, const char *))
{
	const char	*ptr;

	if (!str || !pattern || !eq)
		return (-1);
	ptr = str;
	while (*ptr)
	{
		if (eq(ptr, pattern))
			return (ptr - str);
		ptr += 1;
	}
	return (-1);
}
