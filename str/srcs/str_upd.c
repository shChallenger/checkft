/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_upd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 00:26:28 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/10 00:42:56 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../str.h"

char	*str_upd(const char *str, char (*upd)(const char))
{
	const char	*end;
	char		*ptr;
	char		*lower;

	if (!str || !upd)
		return (NULL);
	end = str_end(str);
	lower = malloc(end - str + 1);
	if (!lower)
		return (NULL);
	ptr = lower;
	while (str != end)
		*ptr++ = upd(*str++);
	return (*ptr = 0, lower);
}
