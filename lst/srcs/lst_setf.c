/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_setf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 00:38:35 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 01:53:08 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lst.h"

t_bool	lst_setf(t_lst *lst, const t_size i, void *ele)
{
	t_bool	success;

	success = lst_set(lst, i, ele);
	if (success == FALSE && lst->free && ele)
		lst->free(ele);
	return (success);
}
