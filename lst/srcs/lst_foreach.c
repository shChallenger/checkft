/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_foreach.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 00:37:22 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 01:51:13 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lst.h"

void	lst_foreach(const t_lst *lst, void (*f)(void *))
{
	t_lstpart	*part;

	if (!lst || !f)
		return ;
	part = lst->start;
	while (part)
	{
		f(part->ele);
		part = part->next;
	}
}
