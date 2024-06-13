/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getfile.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:42:41 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/10 19:00:34 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../getln.h"

char	*getfile(const char *path)
{
	int		fd;
	char	*content;

	if (!path)
		return (NULL);
	fd = open(path, O_RDONLY);
	if (fd < 0)
		return (NULL);
	content = getuntil(fd, FALSE, '\0');
	return (close(fd), content);
}
