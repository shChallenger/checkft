/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_idofs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 01:43:35 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/10 01:45:25 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../str.h"

int	str_idofs(const char *str, const char *pattern)
{
	return (str_idget(str, pattern, str_eq));
}
