/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_setn.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 00:38:14 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 01:53:13 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lst.h"

t_bool	lst_setn(t_lst *lst, const t_size i, void *ele)
{
	if (!ele)
		return (NELE);
	return (lst_set(lst, i, ele));
}
