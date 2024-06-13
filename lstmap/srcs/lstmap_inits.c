/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap_inits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 02:10:52 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 02:44:08 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lstmap.h"

t_bool	lstmap_inits(t_lstmap *map, t_lst *keys, t_lst *values)
{
	if (!map || !keys || !values)
		return (lst_clear(keys), lst_clear(values), FALSE);
	map->keys = keys;
	map->values = values;
	return (TRUE);
}
