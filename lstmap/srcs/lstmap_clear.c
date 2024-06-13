/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap_clear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 18:54:18 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 02:19:47 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lstmap.h"

void	lstmap_clear(t_lstmap *map)
{
	if (!map)
		return ;
	lst_clear(map->keys);
	lst_clear(map->values);
}
