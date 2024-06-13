/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_pop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 01:17:13 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 01:52:04 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lst.h"

void	*lst_pop(t_lst *lst, const t_size i)
{
	if (!lst || !lst->start || !i)
		return (lst_rmfirst(lst, TRUE));
	return (lst_rmpart(lst, lstpart_get(lst, i - 1), TRUE));
}
