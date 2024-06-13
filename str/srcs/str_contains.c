/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_contains.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 00:48:54 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/10 05:16:11 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../str.h"

t_bool	str_contains(const char *str, const char *pattern)
{
	return (str_idofs(str, pattern) != -1);
}
