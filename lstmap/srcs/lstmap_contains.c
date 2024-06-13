/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap_contains.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 02:06:28 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 02:19:50 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lstmap.h"

t_bool	lstmap_contains(t_lstmap *map, void *key)
{
	if (!map || !map->keys || !key)
		return (FALSE);
	return (lst_contains(map->keys, key));
}
