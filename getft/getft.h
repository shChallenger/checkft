/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 00:41:14 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/10 23:33:46 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GETFT_H

# define GETFT_H

# define INCLUDE_FOLDER "/usr/include/"

# include "../getln/getln.h"
# include "../ctreat/ctreat.h"

t_bool		getft(const char *file, t_lst *defs, t_lst *calls, t_lst *includes);

#endif
