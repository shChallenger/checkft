/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_rmall.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 00:54:21 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 01:52:28 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lst.h"

static t_bool	ecp_rmele(t_lst *lst, void *ele)
{
	lst_rmele(lst, ele);
	return (TRUE);
}

t_bool	lst_rmall(t_lst *dest, t_lst *from)
{
	if (!dest || !from)
		return (FALSE);
	return (lst_testeach(from, ecp_rmele, dest));
}
