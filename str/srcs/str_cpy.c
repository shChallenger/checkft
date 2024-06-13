/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_cpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 02:10:33 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/10 00:40:12 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../str.h"

char	*str_cpy(char *dst, const char *src)
{
	if (!dst || !src)
		return (NULL);
	*ptr_cpy(dst, src) = 0;
	return (dst);
}
