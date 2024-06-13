/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 00:41:42 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 06:46:56 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../getft.h"

static t_bool	isfun(const char c, const t_bool isbefore)
{
	if (isbefore)
		return (c == '!' || c == '(' || c == ')' || c == '\t' || c == ' '
			|| c == '*');
	return ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A'
			&& c <= 'Z') || c == '_');
}

static t_bool	addft(t_lst *lst, t_lst *local, const char *start,
		const char *end)
{
	t_size		parenth;
	const char	*end_save = end;
	char		*dup;

	parenth = (*end == '(');
	while (*++end_save && parenth)
		parenth += ((*end_save == '(') - (*end_save == ')'));
	if (*end == '(' && (*end_save == '(' || !*end_save))
		return (!parenth);
	while (--end > start && (*end == ' ' || (*end >= '\t' && *end <= '\r'
				&& *end != '\n')))
		;
	if (end <= start || !isfun(*end, FALSE))
		return (end > start);
	end_save = end + 1;
	while (end > start && isfun(*(end - 1), FALSE))
		end -= 1;
	if (end == start || !isfun(*(end - 1), TRUE))
		return (end != start);
	if (!ecp(&dup, str_ndup(end, end_save - end)) || str_eq(dup, "if")
		|| str_eq(dup, "while") || str_eq(dup, "switch")
		|| str_eq(dup, "return") || str_eq(dup, "sizeof")
		|| lst_contains(lst, dup) || lst_contains(local, dup))
		return (free(dup), dup != NULL);
	return (lst_addf(lst, dup));
}

static t_bool	addinc(t_lst *lst, const char *dir, const char **c,
					t_ctreat *treat)
{
	size_t		ext;
	const char	*save;
	char		*dup;

	while (*++(*c) == ' ' || *(*c) == '\t')
		;
	if (!**c || str_ncmp(*c, "include", 7))
		return (*c != 0);
	*c += 7;
	while (**c && ctreat(treat, c))
		*c += 1;
	if (!**c || !*((*c) + 1))
		return (FALSE);
	ext = ((**c == '<') * str_len(dir));
	save = ++(*c);
	while (**c && !ctreat(treat, c))
		*c += 1;
	if (!**c)
		return (FALSE);
	dup = str_build(2, str_dup(dir + ext), str_ndup(save, *c - save - 1));
	if (!dup || lst_contains(lst, dup))
		return (dup != NULL);
	return (lst_addf(lst, dup));
}

static t_bool	retreiveft(t_lst *const *ptrs, const char *dir,
					const char *content)
{
	const char		*c = content - 1;
	int				brackets;
	t_ctreat		treat;
	t_lst			local;

	lst_initf(&local, free, NULL, str_cmp);
	brackets = 0;
	ctreat_init(&treat);
	while (*++c)
	{
		if (!ctreat(&treat, &c))
			continue ;
		if (brackets == 1 && *c == '}')
			lst_clear(&local);
		brackets += ((*c == '{') - (*c == '}'));
		if ((*c == ')' && *(c + 1) == '(' && !addft(&local, NULL, content, c))
			|| (*c == '(' && !addft(ptrs[!brackets], &local, content, c))
			|| (*c == '#' && !addinc(ptrs[2], dir, &c, &treat)))
			break ;
	}
	return (lst_clear(&local), *c == '\0');
}

t_bool	getft(const char *file, t_lst *defs, t_lst *calls, t_lst *includes)
{
	t_lst *const	ptrs[3] = {calls, defs, includes};
	char			*content;
	char			*dir;
	t_bool			result;

	if (!file || !includes || (!defs && !calls))
		return (FALSE);
	dir = str_build(2, str_ndup("./", (!str_swith(file, "./")
					&& !str_swith(file, "/") && !str_swith(file, "..")) << 1),
			str_ndup(file, str_lidof(file, '/') + 1));
	if (!dir)
		return (FALSE);
	content = getfile(file);
	if (!content)
		return (free(dir), FALSE);
	result = retreiveft(ptrs, dir, content);
	return (free(dir), free(content), result);
}
