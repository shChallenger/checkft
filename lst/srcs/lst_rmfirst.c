/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_rmfirst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 01:24:41 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 01:52:57 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lst.h"

void	*lst_rmfirst(t_lst *lst, const t_bool pop)
{
	t_lstpart	*temp;
	void		*ele;

	if (!lst || !lst->start)
		return (NULL);
	temp = lst->start->next;
	if (temp)
		temp->last = NULL;
	if (pop)
		ele = lst->start->ele;
	else
	{
		free(lst->start->ele);
		ele = (void *) TRUE;
	}
	free(lst->start);
	lst->start = temp;
	lst->size--;
	return (ele);
}
