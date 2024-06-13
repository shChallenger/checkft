/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 02:12:24 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 02:19:54 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lstmap.h"

void	lstmap_free(t_lstmap *map)
{
	if (!map)
		return ;
	lst_free(map->keys);
	lst_free(map->values);
	free(map);
}
