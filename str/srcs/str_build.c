/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_build.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 00:51:18 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/10 23:40:13 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../str.h"

static void	free_array(const char **array)
{
	char	**ptrs;

	ptrs = (char **) array;
	while (*ptrs)
		free(*(ptrs++));
	free(array);
}

char	*str_build(const int argc, ...)
{
	va_list		args;
	const char	**ptrs = malloc(sizeof(char *) * (argc + 1));
	char		*build;
	int			i;

	if (!ptrs)
		return (NULL);
	i = 0;
	va_start(args, argc);
	while (i < argc)
		ptrs[i++] = va_arg(args, char *);
	ptrs[i] = NULL;
	va_end(args);
	build = str_join(ptrs, '\0');
	return (free_array(ptrs), build);
}
