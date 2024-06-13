/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap_foreach.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 02:08:16 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 02:19:52 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lstmap.h"

void	lstmap_foreach(t_lstmap *map, void (*f)(void *, void *))
{
	t_lstpart	*keypart;
	t_lstpart	*valuepart;

	if (!map || !map->keys || !map->values || !f)
		return ;
	keypart = map->keys->start;
	valuepart = map->values->start;
	while (keypart && valuepart)
	{
		f(keypart->ele, valuepart->ele);
		keypart = keypart->next;
		valuepart = valuepart->next;
	}
}
