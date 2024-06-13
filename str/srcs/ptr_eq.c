/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_eq.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 01:35:35 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/10 05:16:05 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../str.h"

t_bool	ptr_eq(const char *ptr, const char *ptr2)
{
	if (!ptr || !ptr2)
		return (0);
	return (*ptr == *ptr2);
}