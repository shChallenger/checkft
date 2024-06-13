/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_newf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 00:40:45 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 01:46:17 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lst.h"

t_lst	*lst_newf(void (*free)(void *), void *(*dup)(void *),
					int (*cmp)(void *, void *))
{
	t_lst	*lst;

	lst = malloc(sizeof(t_lst));
	lst_initf(lst, free, dup, cmp);
	return (lst);
}
