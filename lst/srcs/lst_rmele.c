/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_rmele.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 01:25:43 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 01:43:14 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lst.h"

t_bool	lst_rmele(t_lst *lst, void *ele)
{
	t_lstpart	*part;

	if (!lst || !lst->start || !lst->cmp)
		return (FALSE);
	if (lst->cmp(lst->start->ele, ele) == 0)
		return (lst_rmfirst(lst, FALSE) != NULL);
	part = lst->start;
	while (part->next)
	{
		if (lst->cmp(part->next->ele, ele) == 0)
			return (lst_rmpart(lst, part, FALSE) != NULL);
		part = part->next;
	}
	return (FALSE);
}
