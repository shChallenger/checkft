/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap_addnf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 02:14:03 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 02:19:45 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lstmap.h"

t_bool	lstmap_addnf(t_lstmap *map, void *key, void *value, t_bool free_key)
{
	t_bool	success;

	success = lstmap_addn(map, key, value);
	if (success != TRUE)
	{
		map->values->free(value);
		if (free_key)
			map->keys->free(key);
	}
	return (success);
}
