/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_ncpy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 02:21:14 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/03 23:15:06 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../str.h"

char	*str_ncpy(char *dst, const char *src, const size_t n)
{
	if (!src || !dst)
		return (NULL);
	ptr_ncpy(dst, src, n);
	return (dst);
}
