/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap_addn.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 02:13:32 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 02:19:43 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lstmap.h"

t_bool	lstmap_addn(t_lstmap *map, void *key, void *value)
{
	if (!value)
		return (NELE);
	return (lstmap_add(map, key, value));
}
