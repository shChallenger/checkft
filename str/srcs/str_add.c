/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_add.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 02:17:37 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/03 22:51:44 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../str.h"

char	*str_add(const char *str, const char *str2)
{
	char	*add;

	if (!str && !str2)
		return (NULL);
	add = malloc(str_len(str) + str_len(str2) + 1);
	if (add)
		*ptr_cpy(ptr_cpy(add, str), str2) = 0;
	return (add);
}
