/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_addall.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 00:44:16 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 04:30:09 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lst.h"

t_bool	lst_addall(t_lst *dest, t_lst *from)
{
	t_lst	*clone;
	t_bool	success;

	if (!dest || !from || !from->dup)
		return (FALSE);
	clone = lst_clone(from);
	success = (lst_testeach(clone, lst_add, dest) == TRUE);
	if (success)
		clone->free = NULL;
	return (lst_free(clone), success);
}
