/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_add.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:37:06 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 01:42:12 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lst.h"

t_bool	lst_add(t_lst *lst, void *ele)
{
	t_lstpart	*part;

	if (!lst)
		return (FALSE);
	part = lstpart_new(ele, lst->end, NULL);
	if (!part)
		return (FALSE);
	if (lst->end)
		lst->end->next = part;
	else
		lst->start = part;
	lst->end = part;
	return (lst->size = lst->size + 1, TRUE);
}
