/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap_rmele.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 02:09:16 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 02:20:27 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lstmap.h"

t_bool	lstmap_rmele(t_lstmap *map, void *key)
{
	int	index;

	if (!map || !map->keys || !map->values)
		return (FALSE);
	index = lst_indexof(map->keys, key);
	if (index == -1)
		return (FALSE);
	return (lstmap_rm(map, index));
}
