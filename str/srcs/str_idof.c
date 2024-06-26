/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_idof.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 01:42:15 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/10 01:43:30 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../str.h"

int	str_idof(const char *str, const char c)
{
	return (str_idget(str, &c, ptr_eq));
}
