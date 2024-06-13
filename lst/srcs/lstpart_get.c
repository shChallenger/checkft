/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstpart_get.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 00:34:47 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 01:43:37 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lst.h"

static t_lstpart	*lstpart_endsearch(t_lstpart *part, t_size i)
{
	if (!part)
		return (NULL);
	while (part && i)
	{
		part = part->last;
		i--;
	}
	if (!i)
		return (part);
	return (NULL);
}

static t_lstpart	*lstpart_startsearch(t_lstpart *part, t_size i)
{
	if (!part)
		return (NULL);
	while (part && i)
	{
		part = part->next;
		i--;
	}
	if (!i)
		return (part);
	return (NULL);
}

t_lstpart	*lstpart_get(const t_lst *lst, const t_size i)
{
	if (!lst || i >= lst->size)
		return (NULL);
	if (i >= (lst->size << 1))
		return (lstpart_endsearch(lst->end, lst->size - i - 1));
	return (lstpart_startsearch(lst->start, i));
}
