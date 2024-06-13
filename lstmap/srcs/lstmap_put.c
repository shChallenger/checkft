/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap_put.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 19:04:18 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 02:20:14 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lstmap.h"

t_bool	lstmap_put(t_lstmap *map, void *key, void *value)
{
	int	index;

	if (!map || !map->keys || !map->values || !key)
		return (FALSE);
	index = lst_indexof(map->keys, key);
	if (index == -1)
		return (lstmap_add(map, key, value));
	return (lst_set(map->values, index, value));
}
