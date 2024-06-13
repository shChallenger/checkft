/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_wend.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 01:27:23 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/10 01:55:37 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../str.h"

const char	*str_wend(const char *str, const char c)
{
	if (!str || !*str)
		return (NULL);
	while (*str && !(*str++ != c && *str == c))
		;
	return (str);
}
