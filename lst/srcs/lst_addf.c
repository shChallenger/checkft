/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_addf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 00:43:11 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 01:42:22 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lst.h"

t_bool	lst_addf(t_lst *lst, void *ele)
{
	t_bool	success;

	success = lst_add(lst, ele);
	if (success == FALSE && lst->free && ele)
		lst->free(ele);
	return (success);
}
