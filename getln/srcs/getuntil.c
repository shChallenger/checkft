/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getuntil.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 02:20:29 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 00:26:13 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../getln.h"

static char	*lst_tostr(t_lst *lst, const char *last, const t_size last_len,
				const t_bool stay_content)
{
	t_lstpart	*part;
	t_lstpart	*temp;
	char		*str;
	char		*ptr;

	if (!stay_content)
		return (lst_clear(lst), NULL);
	str = malloc(lst->size + last_len + 1);
	if (!str)
		return (lst_clear(lst), NULL);
	part = lst->start;
	ptr = str;
	while (part)
	{
		ptr = ptr_cpy(ptr, (const char *) part->ele);
		temp = part->next;
		lstpart_free(part, lst->free);
		part = temp;
	}
	return (*ptr_ncpy(ptr, last, last_len) = 0, str);
}

static t_bool	read_ecp(const int fd, char *buff, const char **readed,
			const char **index)
{
	ssize_t	length;

	length = read(fd, buff, BUFF_SIZE);
	if (length < 0)
		length = 0;
	*index = buff;
	*readed = (buff + length);
	return (length != 0);
}

char	*getuntil(const int fd, const t_bool ul_char, const char c)
{
	static char			buff[BUFF_SIZE];
	static const char	*index = buff;
	static const char	*readed = buff;
	const char			*pos = buff;
	t_lst				lst;

	lst_initf(&lst, free, NULL, NULL);
	while (index < readed || read_ecp(fd, buff, &readed, &index))
	{
		pos = index;
		while (index < readed && *index != c)
			index += 1;
		if (index < (buff + BUFF_SIZE))
		{
			index += (ul_char == TRUE);
			break ;
		}
		if (lst_addnf(&lst, str_ndup(pos, index - pos)) != TRUE)
			return (lst_clear(&lst), NULL);
		lst.size += (index - pos - 1);
		pos = buff;
	}
	pos = lst_tostr(&lst, pos, index - pos, readed != buff);
	index += (ul_char != TRUE);
	return ((char *) pos);
}
