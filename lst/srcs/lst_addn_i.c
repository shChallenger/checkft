/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_addn_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 00:45:35 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 01:42:26 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lst.h"

t_bool	lst_addn_i(t_lst *list, void *ele, t_size i)
{
	if (!ele)
		return (NELE);
	return (lst_add_i(list, ele, i));
}
