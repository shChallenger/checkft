/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_clone.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 00:41:11 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 01:50:32 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lst.h"

t_lst	*lst_clone(const t_lst *lst)
{
	t_lst		*clone;
	t_lstpart	*part;
	void		*ele;

	if (!lst || !lst->dup)
		return (NULL);
	clone = lst_newf(lst->free, lst->dup, lst->cmp);
	if (!clone)
		return (NULL);
	part = lst->start;
	while (part)
	{
		if (part->ele)
			ele = lst->dup(part->ele);
		else
			ele = NULL;
		if ((part->ele && !ele) || !lst_addf(clone, ele))
			return (lst_free(clone), NULL);
		part = part->next;
	}
	return (clone);
}
