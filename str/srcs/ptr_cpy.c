/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_cpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 22:44:04 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/03 23:27:17 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../str.h"

char	*ptr_cpy(char *dst, const char *src)
{
	if (!dst)
		return (NULL);
	if (!src)
		return (dst);
	while (*src)
		*dst++ = *src++;
	return (dst);
}
