/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_set.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 00:12:32 by rfourniq          #+#    #+#             */
/*   Updated: 2024/05/16 00:12:32 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lst.h"

t_bool	lst_set(t_lst *lst, const t_size i, void *ele)
{
	t_lstpart	*part;

	part = lstpart_get(lst, i);
	if (!part)
		return (FALSE);
	if (lst->free)
		lst->free(part->ele);
	part->ele = ele;
	return (TRUE);
}
