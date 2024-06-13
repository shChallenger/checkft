/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_join.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 01:22:31 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/03 23:23:49 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../str.h"

char	*str_join(const char **strs, const char delimiter)
{
	const char	**ptrs;
	size_t		size;
	char		*join;
	char		*ptr;

	if (!strs || !*strs)
		return (NULL);
	size = 0;
	ptrs = strs;
	while (*ptrs)
		size += str_len(*ptrs++);
	join = malloc(size + (ptrs - strs) * !!delimiter + !delimiter);
	if (!join)
		return (NULL);
	ptr = join;
	while (*strs)
	{
		if (delimiter && ptr != join)
			*ptr++ = delimiter;
		ptr = ptr_cpy(ptr, *strs++);
	}
	return (*ptr = 0, join);
}
