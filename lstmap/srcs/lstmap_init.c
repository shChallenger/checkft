/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 18:54:42 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 02:20:03 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lstmap.h"

t_bool	lstmap_init(t_lstmap *map, t_lst *keys, t_lst *values)
{
	if (!map || !keys || !values)
		return (lst_free(keys), lst_free(values), FALSE);
	map->keys = keys;
	map->values = values;
	return (TRUE);
}
