/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_indexof.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 00:36:31 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 01:50:55 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lst.h"

int	lst_indexof(const t_lst *lst, void *ele)
{
	int			i;
	t_lstpart	*part;

	if (!lst || !lst->cmp)
		return (-1);
	i = 0;
	part = lst->start;
	while (part)
	{
		if (lst->cmp(ele, part->ele) == 0)
			return (i);
		part = part->next;
		i++;
	}
	return (-1);
}
