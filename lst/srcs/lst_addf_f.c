/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_addf_f.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 00:47:32 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 01:42:17 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lst.h"

t_bool	lst_addf_f(t_lst *lst, void *ele)
{
	t_bool	success;

	success = lst_add_f(lst, ele);
	if (success == FALSE)
		lst->free(ele);
	return (success);
}
