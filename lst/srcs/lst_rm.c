/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_rm.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:46:32 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 01:52:21 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lst.h"

t_bool	lst_rm(t_lst *lst, const t_size i)
{
	if (!lst || !lst->start || !i)
		return (lst_rmfirst(lst, FALSE) != NULL);
	return (lst_rmpart(lst, lstpart_get(lst, i - 1), FALSE) != NULL);
}
