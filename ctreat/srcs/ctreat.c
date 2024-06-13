/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctreat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 19:02:26 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/11 00:14:16 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ctreat.h"

void	ctreat_init(t_ctreat *treat)
{
	treat->simp_quote = FALSE;
	treat->doub_quote = FALSE;
	treat->line_comm = FALSE;
	treat->huge_comm = FALSE;
	treat->angle = FALSE;
	treat->angle_ex = FALSE;
}

static t_bool	in_quote(t_ctreat *treat, const char **ptr)
{
	t_bool		doub_quote;
	const char	c = **ptr;

	if (c == '\\')
		return (*ptr += (treat->has_quote && (*ptr)[1]), treat->has_quote != 0);
	doub_quote = (c == '"');
	if (!doub_quote && (c != '\''))
		return (treat->has_quote != 0);
	if (!treat->v[!doub_quote])
		treat->v[doub_quote] ^= 1;
	return (TRUE);
}

static t_bool	in_comm(t_ctreat *treat, const char **ptr)
{
	const char	*c = *ptr;

	if (*c == '\0')
		return (treat->has_comm != 0);
	if (*c == '\\')
		return (*ptr += (c[1] == '\n' && treat->line_comm), !!treat->has_comm);
	if (*c == '\n')
		return (treat->line_comm = FALSE, treat->has_comm != 0);
	if (treat->line_comm)
		return (TRUE);
	if (*c == '/' && c[1] == *c && !treat->huge_comm)
		return (treat->line_comm = TRUE);
	if (c[treat->huge_comm] != '/' || c[!treat->huge_comm] != '*')
		return (treat->huge_comm);
	*ptr += (treat->huge_comm);
	treat->huge_comm ^= 1;
	return (TRUE);
}

static t_bool	in_angle(t_ctreat *treat, const char **ptr)
{
	const char	*c = *ptr;

	if (*c == '\0')
		return (treat->angle);
	if (*c == '\\')
		return (*ptr += (c[1] == '\n' && treat->angle), treat->angle);
	if ((*c != '<' || c[1] == '=' || c[1] == ' ')
		&& (*c != '>' || !treat->angle))
		return (treat->angle);
	if (*c == *(c + 1) || treat->angle_ex)
		return (treat->angle_ex ^= 1, FALSE);
	treat->angle ^= 1;
	return (TRUE);
}

t_bool	ctreat(t_ctreat *t, const char **ptr)
{
	const t_bool	comm = !t->has_quote && !t->has_angle && in_comm(t, ptr);
	const t_bool	quote = !t->has_comm && !t->has_angle && in_quote(t, ptr);
	const t_bool	angle = !t->has_comm && !t->has_quote && in_angle(t, ptr);

	return (!quote && !comm && !angle);
}
