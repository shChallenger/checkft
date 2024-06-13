/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap_putn.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 02:09:40 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 02:20:18 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lstmap.h"

t_bool	lstmap_putn(t_lstmap *map, void *key, void *value)
{
	if (!value)
		return (NELE);
	return (lstmap_put(map, key, value));
}
