/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 02:11:15 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 02:20:07 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lstmap.h"

t_lstmap	*lstmap_new(t_lst *keys, t_lst *values)
{
	t_lstmap	*map;

	if (!keys || !values)
		return (lst_free(keys), lst_free(values), NULL);
	map = malloc(sizeof(t_lstmap));
	if (!lstmap_init(map, keys, values))
		return (free(map), NULL);
	return (map);
}
