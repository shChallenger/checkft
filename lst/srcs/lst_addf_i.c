/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_addf_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 00:46:09 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 01:42:19 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lst.h"

t_bool	list_addf_i(t_lst *lst, void *ele, t_size i)
{
	t_bool	success;

	success = lst_add_i(lst, ele, i);
	if (success == FALSE && lst->free && ele)
		lst->free(ele);
	return (success);
}
