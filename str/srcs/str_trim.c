/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_trim.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 02:41:29 by rfourniq          #+#    #+#             */
/*   Updated: 2024/05/29 02:09:19 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../str.h"

char	*str_trim(const char *str, const char start, const char end)
{
	const char	*ptr;

	if (!str)
		return (NULL);
	while (*str && *str == start)
		str = str + 1;
	ptr = str_end(str);
	while (str != ptr && *(ptr - 1) == end)
		ptr = ptr - 1;
	return (str_ndup(str, ptr - str));
}
