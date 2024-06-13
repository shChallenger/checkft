/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_lidget.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 03:47:21 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 03:48:11 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../str.h"

int	str_lidget(const char *str, const char *pattern,
	t_bool (*eq)(const char *, const char *))
{
	const char	*ptr;
	int			id;

	if (!str || !pattern || !eq)
		return (-1);
	ptr = str;
	id = -1;
	while (*ptr)
	{
		if (eq(ptr, pattern))
			id = (ptr - str);
		ptr += 1;
	}
	return (id);
}
