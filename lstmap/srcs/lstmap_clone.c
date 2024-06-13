/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap_clone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 02:11:48 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 02:19:49 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lstmap.h"

t_lstmap	*lstmap_clone(t_lstmap *map)
{
	if (!map)
		return (NULL);
	return (lstmap_new(lst_clone(map->keys), lst_clone(map->values)));
}
