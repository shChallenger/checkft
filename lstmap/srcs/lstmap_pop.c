/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap_pop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 02:09:00 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 02:20:12 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lstmap.h"

t_mapentry	*lstmap_pop(t_lstmap *map, t_size i)
{
	if (!map || !map->keys || !map->values)
		return (NULL);
	if (map->keys->size <= i || map->values->size != map->keys->size)
		return (NULL);
	return (mapentry_new(lst_pop(map->keys, i), lst_pop(map->values, i)));
}
