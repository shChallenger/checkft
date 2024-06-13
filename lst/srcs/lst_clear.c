/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_clear.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 21:45:15 by rfourniq          #+#    #+#             */
/*   Updated: 2024/05/15 21:45:15 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lst.h"

void	lst_clear(t_lst *lst)
{
	t_lstpart	*part;
	t_lstpart	*temp;

	if (!lst)
		return ;
	part = lst->start;
	while (part)
	{
		temp = part->next;
		lstpart_free(part, lst->free);
		part = temp;
	}
	lst->start = NULL;
	lst->end = NULL;
	lst->size = 0;
}
