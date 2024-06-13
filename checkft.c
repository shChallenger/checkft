/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkft.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 02:31:59 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 06:43:29 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checkft.h"

static t_bool	ftfile_new(t_ftfile **file)
{
	*file = malloc(sizeof(t_ftfile));
	if (!*file)
		return (FALSE);
	lst_initf(&(*file)->defs, free, str_vdup, str_cmp);
	lst_initf(&(*file)->calls, free, NULL, str_cmp);
	lst_initf(&(*file)->includes, free, NULL, str_cmp);
	return (TRUE);
}

static void	ftfile_free(t_ftfile *file)
{
	if (!file)
		return ;
	lst_clear(&file->defs);
	lst_clear(&file->calls);
	lst_clear(&file->includes);
	free(file);
}

static void	show_calls(const char *path, t_ftfile *file, t_lst *all_extern)
{
	t_lstpart	*part;

	lst_rmall(&(file->calls), &(file->defs));
	if (!file->calls.size)
		return ;
	lst_sort(&(file->calls));
	part = file->calls.start;
	printf("External Functions found in '%s': ", path);
	while (part->next)
	{
		printf("%s, ", (char *) part->ele);
		if (!lst_contains(all_extern, part->ele))
			lst_add(all_extern, part->ele);
		part = part->next;
	}
	if (!lst_contains(all_extern, part->ele))
		lst_add(all_extern, part->ele);
	printf("%s\n", (char *) part->ele);
}

static t_bool	analyze_file(char *path, t_lstmap *map, t_lst *all_extern)
{
	t_ftfile	*file;
	t_lstpart	*part;
	t_ftfile	*temp;
	char		*key;

	if (!path || (!str_swith(path, ".") && !str_swith(path, "/"))
		|| lstmap_contains(map, path))
		return (path != NULL);
	if (!ftfile_new(&file))
		return (FALSE);
	if (!getft(path, &(file->defs), &(file->calls), &(file->includes)))
		return (ftfile_free(file), FALSE);
	part = file->includes.start;
	while (part)
	{
		if (!analyze_file(ecp(&key, (char *) part->ele), map, all_extern))
			return (ftfile_free(file), FALSE);
		temp = (t_ftfile *) lstmap_getele(map, key);
		if (temp && !lst_addall(&(file->defs), &(temp->defs)))
			return (ftfile_free(file), FALSE);
		part = part->next;
	}
	if (file->calls.size)
		show_calls(path, file, all_extern);
	return (lstmap_addnf(map, str_dup(path), file, TRUE));
}

int	main(int argc, char *argv[])
{
	t_lst		keys;
	t_lst		values;
	t_lst		all_extern;
	t_lstpart	*part;
	t_lstmap	map;

	lst_initf(&keys, free, NULL, str_cmp);
	lst_initf(&values, ftfile_free, NULL, NULL);
	lst_initf(&all_extern, NULL, NULL, str_cmp);
	lstmap_inits(&map, &keys, &values);
	while (--argc)
		analyze_file(*++argv, &map, &all_extern);
	if (all_extern.size)
	{
		lst_sort(&all_extern);
		printf("\nHere is the whole list of external functions used:\n");
		part = all_extern.start;
		while (part->next)
		{
			printf("%s, ", (char *) part->ele);
			part = part->next;
		}
		printf("%s\n", (char *) part->ele);
	}
	return (lst_clear(&all_extern), lstmap_clear(&map), 0);
}
