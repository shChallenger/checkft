/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap_getele.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 02:07:35 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 02:19:59 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lstmap.h"

void	*lstmap_getele(t_lstmap *map, void *key)
{
	int	i;

	if (!map || !map->keys || !map->values || !key)
		return (NULL);
	i = lst_indexof(map->keys, key);
	if (i == -1)
		return (NULL);
	return (lst_get(map->values, i));
}
