/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_get.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 00:37:04 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 01:42:51 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lst.h"

void	*lst_get(const t_lst *lst, const t_size i)
{
	t_lstpart	*part;

	part = lstpart_get(lst, i);
	if (part)
		return (part->ele);
	return (NULL);
}
