/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getln.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 02:18:24 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/10 18:59:55 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GETLN_H

# define GETLN_H

# define BUFF_SIZE 28000

# include "../str/str.h"
# include "../lst/lst.h"
# include <fcntl.h>
# include <unistd.h>

char	*getuntil(const int fd, const t_bool ul_char, const char c);

char	*getln(const int fd, const t_bool nl_char);

char	*getfile(const char *path);

#endif
