/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstpart_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 00:34:00 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 01:43:39 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lst.h"

t_lstpart	*lstpart_new(void *ele, t_lstpart *last, t_lstpart *next)
{
	t_lstpart	*part;

	part = malloc(sizeof(t_lstpart));
	if (part)
	{
		part->ele = ele;
		part->last = last;
		part->next = next;
	}
	return (part);
}
