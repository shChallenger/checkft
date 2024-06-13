/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_addnf_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 00:46:30 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 01:42:32 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lst.h"

t_bool	lst_addnf_i(t_lst *lst, void *ele, t_size i)
{
	if (!ele)
		return (NELE);
	return (lst_addn_i(lst, ele, i));
}
