/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapentry_get.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 19:48:56 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 02:20:33 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lstmap.h"

static t_mapentry	*mapentry_endsearch(t_lstpart *keypart,
		t_lstpart *valuepart, t_size i)
{
	if (!keypart || !valuepart)
		return (NULL);
	while (keypart && valuepart && i)
	{
		keypart = keypart->last;
		valuepart = valuepart->last;
		i--;
	}
	if (!i)
		return (mapentry_new(keypart->ele, valuepart->ele));
	return (NULL);
}

static t_mapentry	*mapentry_startsearch(t_lstpart *keypart,
		t_lstpart *valuepart, t_size i)
{
	if (!keypart || !valuepart)
		return (NULL);
	while (keypart && valuepart && i)
	{
		keypart = keypart->next;
		valuepart = valuepart->next;
		i--;
	}
	if (!i)
		return (mapentry_new(keypart->ele, valuepart->ele));
	return (NULL);
}

t_mapentry	*mapentry_get(t_lstmap *map, t_size i)
{
	if (!map || !map->keys || !map->values)
		return (NULL);
	if (i >= map->keys->size || map->keys->size != map->values->size)
		return (NULL);
	if (i >= (map->keys->size << 1))
		return (mapentry_endsearch(map->keys->end, map->values->end,
				map->keys->size - i - 1));
	return (mapentry_startsearch(map->keys->start, map->values->start, i));
}
