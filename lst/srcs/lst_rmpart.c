/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_rmpart.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 01:25:05 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 01:53:01 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lst.h"

void	*lst_rmpart(t_lst *lst, t_lstpart *before, const t_bool pop)
{
	t_lstpart	*temp;
	void		*ele;

	if (!lst || !before || !before->next)
		return (NULL);
	temp = before->next->next;
	if (temp)
		temp->last = before;
	else
		lst->end = before;
	if (pop)
		ele = before->next->ele;
	else
	{
		free(before->next->ele);
		ele = (void *) TRUE;
	}
	free(before->next);
	before->next = temp;
	lst->size--;
	return (ele);
}
