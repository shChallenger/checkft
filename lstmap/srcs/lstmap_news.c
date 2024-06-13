/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap_news.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 02:11:31 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 02:20:09 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lstmap.h"

t_lstmap	*lstmap_news(t_lst *keys, t_lst *values)
{
	t_lstmap	*map;

	if (!keys || !values)
		return (lst_clear(keys), lst_clear(values), NULL);
	map = malloc(sizeof(t_lstmap));
	if (!lstmap_inits(map, keys, values))
		return (free(map), NULL);
	return (map);
}
