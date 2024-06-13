/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_rpt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 03:01:24 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/03 23:00:54 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../str.h"

char	*str_rpt(const char *str, size_t n)
{
	char	*rpt;
	char	*ptr;

	if (!str || !n)
		return (NULL);
	rpt = malloc(str_len(str) * n + 1);
	if (!rpt)
		return (NULL);
	ptr = rpt;
	while (n--)
		ptr = ptr_cpy(ptr, str);
	*ptr = 0;
	return (rpt);
}
