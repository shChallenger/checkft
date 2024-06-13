/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_add_i.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 21:33:16 by rfourniq          #+#    #+#             */
/*   Updated: 2024/05/15 21:33:16 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lst.h"

t_bool	lst_add_i(t_lst *lst, void *ele, t_size i)
{
	t_lstpart	*part;
	t_lstpart	*temp;

	if (!lst || !i)
		return (lst_add_f(lst, ele));
	temp = lstpart_get(lst, i - 1);
	if (!temp)
		return (FALSE);
	part = lstpart_new(ele, temp, temp->next);
	if (!part)
		return (FALSE);
	if (temp->next)
		temp->next->last = part;
	temp->next = part;
	return (lst->size = lst->size + 1, TRUE);
}
