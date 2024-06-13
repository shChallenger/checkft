/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstpart_free.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 00:35:19 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 01:43:34 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lst.h"

void	lstpart_free(t_lstpart *part, void (*fn_free)(void *))
{
	if (!part)
		return ;
	if (part->ele && fn_free)
		fn_free(part->ele);
	free(part);
}
