/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapentry_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 02:05:34 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 02:20:35 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lstmap.h"

t_mapentry	*mapentry_new(void *key, void *value)
{
	t_mapentry	*entry;

	entry = malloc(sizeof(t_mapentry));
	if (entry)
	{
		entry->key = key;
		entry->value = value;
	}
	return (entry);
}
