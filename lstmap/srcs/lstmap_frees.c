/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap_frees.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 02:12:40 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 02:19:56 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lstmap.h"

void	lstmap_frees(t_lstmap *map)
{
	if (!map)
		return ;
	lstmap_clear(map);
	free(map);
}
