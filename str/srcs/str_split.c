/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 01:04:24 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/10 02:07:10 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../str.h"

char	**str_split(const char *str, const char c)
{
	char		**split;
	char		**ptrs;
	const char	*ptr;

	if (!str)
		return (NULL);
	split = malloc(sizeof(char *) + (str_countw(str, c) + 1));
	if (!split)
		return (NULL);
	ptr = str;
	ptrs = split;
	while (ecpc(&ptr, str_wend(ptr, c)))
	{
		*ptrs++ = str_ndup(str, ptr - str);
		str = str_wnext(str, c);
	}
	return (*ptrs = NULL, split);
}
