/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_lower.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 00:24:01 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/10 00:45:34 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../str.h"

char	to_lower(const char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + LET_DIST);
	return (c);
}