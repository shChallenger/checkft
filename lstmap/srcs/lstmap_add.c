/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap_add.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 19:28:58 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 02:19:38 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lstmap.h"

t_bool	lstmap_add(t_lstmap *map, void *key, void *value)
{
	t_bool	success;

	if (!map || !map->keys || !map->values)
		return (FALSE);
	success = lst_addn(map->keys, key);
	if (success != TRUE)
		return (success);
	if (!lst_add(map->values, value))
		return (lst_rm(map->keys, map->keys->size - 1), FALSE);
	return (TRUE);
}
