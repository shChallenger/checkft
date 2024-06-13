/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_sub.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 02:51:46 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/10 00:33:41 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../str.h"

char	*str_sub(const char *str, const size_t start, const size_t end)
{
	size_t	len;

	if (!str || start > end)
		return (NULL);
	len = str_len(str);
	if (start >= len || end > len)
		return (NULL);
	return (str_ndup(str + start, end - start));
}
