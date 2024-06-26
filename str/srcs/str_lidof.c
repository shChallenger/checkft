/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_lidof.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 01:42:15 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 03:48:39 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../str.h"

int	str_lidof(const char *str, const char c)
{
	return (str_lidget(str, &c, ptr_eq));
}
