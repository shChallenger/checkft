/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_ewith.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 00:11:27 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/10 05:16:22 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../str.h"

t_bool	str_ewith(const char *str, const char *pattern)
{
	if (!str || !pattern)
		return (0);
	return (str_swith(str_end(str) - str_len(pattern), pattern));
}
