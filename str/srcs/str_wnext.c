/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_wnext.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 01:13:50 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/10 01:55:38 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../str.h"

const char	*str_wnext(const char *str, const char c)
{
	if (!str)
		return (NULL);
	while (*str)
	{
		if (*str++ == c && *str != c)
			return (str);
	}
	return (NULL);
}
