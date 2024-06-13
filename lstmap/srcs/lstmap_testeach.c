/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap_testeach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 19:53:35 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 02:20:29 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lstmap.h"

t_bool	lstmap_testeach(t_lstmap *map, t_bool (*f)(void *, void *, void *),
		void *p)
{
	t_lstpart	*keypart;
	t_lstpart	*valuepart;

	if (!map || !map->keys || !map->values || !f)
		return (FALSE);
	keypart = map->keys->start;
	valuepart = map->values->start;
	while (keypart && valuepart)
	{
		if (f(p, keypart->ele, valuepart->ele) == FALSE)
			return (FALSE);
		keypart = keypart->next;
		valuepart = valuepart->next;
	}
	return (TRUE);
}
