/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_end.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 02:07:04 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/03 23:03:10 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../str.h"

const char	*str_end(const char *str)
{
	if (!str)
		return (NULL);
	if (!*str)
		return (str);
	while (*++str)
		;
	return (str);
}
