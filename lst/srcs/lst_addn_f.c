/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_addn_f.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 00:47:08 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 01:42:24 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lst.h"

t_bool	lst_addn_f(t_lst *lst, void *ele)
{
	if (!ele)
		return (NELE);
	return (lst_add_f(lst, ele));
}
