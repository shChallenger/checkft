/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_dup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 02:12:53 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/03 22:54:07 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../str.h"

char	*str_dup(const char *str)
{
	if (!str)
		return (NULL);
	return (str_cpy(malloc(str_len(str) + 1), str));
}
