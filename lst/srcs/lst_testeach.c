/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_testeach.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 00:37:36 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 01:43:32 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lst.h"

t_bool	lst_testeach(t_lst *lst, t_bool (*f)(void *, void *), void *p)
{
	t_lstpart	*part;
	t_bool		result;

	if (!lst || !f)
		return (FALSE);
	result = TRUE;
	part = lst->start;
	while (part && result == TRUE)
	{
		result = f(p, part->ele);
		part = part->next;
	}
	return (result);
}
