/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctreat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 19:10:34 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/10 21:34:37 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CTREAT_H

# define CTREAT_H

# include "../types.h"

typedef union u_ctreat
{
	t_bool	v[6];
	struct
	{
		unsigned short	has_quote;
		unsigned short	has_comm;
		t_bool			has_angle;
		t_bool			has_angle_ex;
	};
	struct
	{
		t_bool	simp_quote;
		t_bool	doub_quote;
		t_bool	line_comm;
		t_bool	huge_comm;
		t_bool	angle;
		t_bool	angle_ex;
	};
}				t_ctreat;

void	ctreat_init(t_ctreat *treat);

t_bool	ctreat(t_ctreat *treat, const char **ptr);

#endif
