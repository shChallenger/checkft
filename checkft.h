/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkft.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 02:30:13 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 03:18:22 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKFT_H

# define CHECKFT_H

# include "getft/getft.h"
# include "lstmap/lstmap.h"
# include <stdio.h>

typedef struct s_ftfile
{
	t_lst	defs;
	t_lst	calls;
	t_lst	includes;
}				t_ftfile;

#endif
