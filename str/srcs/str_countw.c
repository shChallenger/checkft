/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_countw.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 01:06:21 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/10 02:03:00 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../str.h"

unsigned int	str_countw(const char *str, const char c)
{
	unsigned int	words;

	if (!str || !*str)
		return (0);
	words = 1;
	while (ecpc(&str, str_wend(str, c)))
		words += 1;
	return (words);
}
