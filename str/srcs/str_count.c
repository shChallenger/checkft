/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_count.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 01:00:31 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/10 01:51:05 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../str.h"

unsigned int	str_count(const char *str, const char c)
{
	unsigned int	count;

	if (!str)
		return (0);
	count = 0;
	while (*str)
		count += (*str++ == c);
	return (count);
}
