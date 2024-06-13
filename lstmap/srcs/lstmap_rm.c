/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap_rm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 19:36:03 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 02:20:24 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lstmap.h"

t_bool	lstmap_rm(t_lstmap *map, t_size i)
{
	t_bool	success;

	if (!map || !map->keys || !map->values)
		return (FALSE);
	success = TRUE;
	success &= lst_rm(map->keys, i);
	success &= lst_rm(map->values, i);
	return (success);
}
