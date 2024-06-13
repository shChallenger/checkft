/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_add_f.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 21:33:14 by rfourniq          #+#    #+#             */
/*   Updated: 2024/05/15 21:33:14 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lst.h"

t_bool	lst_add_f(t_lst *lst, void *ele)
{
	t_lstpart	*part;

	if (!lst)
		return (FALSE);
	part = lstpart_new(ele, NULL, lst->start);
	if (!part)
		return (FALSE);
	lst->start = part;
	return (lst->size = lst->size + 1, TRUE);
}
