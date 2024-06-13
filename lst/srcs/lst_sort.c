/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 01:01:52 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 01:49:41 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lst.h"

static void	lstpart_swap(t_lstpart *part, t_lstpart *part2)
{
	void	*temp;

	temp = part->ele;
	part->ele = part2->ele;
	part2->ele = temp;
}

void	lst_sort(const t_lst *lst)
{
	t_lstpart	*part;
	t_lstpart	*next;

	if (!lst || !lst->cmp)
		return ;
	part = lst->start;
	while (part)
	{
		next = part->next;
		while (next)
		{
			if (lst->cmp(part->ele, next->ele) > 0)
				lstpart_swap(part, next);
			next = next->next;
		}
		part = part->next;
	}
}
