/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 00:40:26 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 01:43:00 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lst.h"

t_lst	*lst_new(void)
{
	t_lst	*lst;

	lst = malloc(sizeof(t_lst));
	lst_init(lst);
	return (lst);
}