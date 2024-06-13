/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 00:50:08 by rfourniq          #+#    #+#             */
/*   Updated: 2024/05/29 00:50:08 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_H

# define STR_H

# include "../types.h"
# include <stdarg.h>
# include <stddef.h>

# define LET_DIST 32

char			*ecp(char **ptr, char *res);

const char		*ecpc(const char **ptr, const char *res);

char			*ptr_cpy(char *dst, const char *src);

t_bool			ptr_eq(const char *ptr, const char *ptr2);

char			*ptr_ncpy(char *dst, const char *src, size_t n);

char			*str_add(const char *str, const char *str2);

char			*str_build(int argc, ...);

int				str_cmp(const char *str, const char *str2);

int				str_cmpi(const char *str, const char *str2);

t_bool			str_contains(const char *str, const char *pattern);

unsigned int	str_count(const char *str, const char c);

unsigned int	str_countw(const char *str, const char c);

char			*str_cpy(char *dst, const char *src);

char			*str_dup(const char *str);

const char		*str_end(const char *str);

t_bool			str_eq(const char *str, const char *str2);

t_bool			str_eqi(const char *str, const char *str2);

t_bool			str_ewith(const char *str, const char *pattern);

int				str_idget(const char *str, const char *pattern,
					t_bool (*eq)(const char *, const char *));

int				str_idof(const char *str, const char c);

int				str_idofs(const char *str, const char *pattern);

char			*str_join(const char **strs, const char delimiter);

size_t			str_len(const char *str);

int				str_lidget(const char *str, const char *pattern,
					t_bool (*eq)(const char *, const char *));

int				str_lidof(const char *str, const char c);

int				str_lidofs(const char *str, const char *pattern);

char			*str_lower(const char *str);

int				str_ncmp(const char *str, const char *str2, size_t n);

int				str_ncmpi(const char *str, const char *str2, size_t n);

char			*str_ncpy(char *dst, const char *src, const size_t n);

char			*str_ndup(const char *str, const size_t n);

char			*str_rpt(const char *str, size_t n);

char			**str_split(const char *str, const char c);

char			*str_sub(const char *str, const size_t start, const size_t end);

t_bool			str_swith(const char *str, const char *pattern);

char			*str_trim(const char *str, const char start, const char end);

char			*str_upd(const char *str, char (*upd)(const char));

char			*str_upper(const char *str);

void			*str_vdup(const char *str);

const char		*str_wend(const char *str, const char c);

const char		*str_wnext(const char *str, const char c);

char			to_lower(const char c);

char			to_upper(const char c);

#endif
