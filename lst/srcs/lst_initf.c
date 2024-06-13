/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_initf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 00:40:00 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 01:46:20 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lst.h"

void	lst_initf(t_lst *lst, void (*free)(void *), void *(*dup)(void *),
					int (*cmp)(void *, void *))
{
	if (!lst)
		return ;
	lst->start = NULL;
	lst->end = NULL;
	lst->size = 0;
	lst->free = free;
	lst->dup = dup;
	lst->cmp = cmp;
}
