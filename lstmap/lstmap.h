/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 20:28:06 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 02:31:29 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LSTMAP_H

# define LSTMAP_H

# include "../lst/lst.h"

typedef struct s_lstmap
{
	t_lst	*keys;
	t_lst	*values;
}				t_lstmap;

typedef struct s_mapentry
{
	void	*key;
	void	*value;
}				t_mapentry;

t_bool		lstmap_init(t_lstmap *map, t_lst *keys, t_lst *values);

t_bool		lstmap_inits(t_lstmap *map, t_lst *keys, t_lst *values);

t_lstmap	*lstmap_new(t_lst *keys, t_lst *values);

t_lstmap	*lstmap_news(t_lst *keys, t_lst *values);

t_lstmap	*lstmap_clone(t_lstmap *map);

t_bool		lstmap_add(t_lstmap *map, void *key, void *value);

t_bool		lstmap_addn(t_lstmap *map, void *key, void *value);

t_bool		lstmap_addf(t_lstmap *map, void *key, void *value, t_bool free_key);

t_bool		lstmap_addnf(t_lstmap *map, void *key, void *value,
				t_bool free_key);

t_bool		lstmap_put(t_lstmap *map, void *key, void *value);

t_bool		lstmap_putn(t_lstmap *map, void *key, void *value);

t_bool		lstmap_putf(t_lstmap *map, void *key, void *value, t_bool free_key);

t_bool		lstmap_putnf(t_lstmap *map, void *key, void *value,
				t_bool free_key);

t_bool		lstmap_contains(t_lstmap *map, void *key);

t_mapentry	*lstmap_get(t_lstmap *map, t_size i);

void		*lstmap_getele(t_lstmap *map, void *key);

/*

Prototype of f must be : void (*f)(void *, void *)
Where args are key, value

*/
void		lstmap_foreach(t_lstmap *map, void (*f)());

/*

Prototype of f must be : t_bool (*f)(void *, void *, void *)
Where first arg is p, second arg is key, and third arg is value

*/
t_bool		lstmap_testeach(t_lstmap *map, t_bool (*f)(), void *p);

t_mapentry	*lstmap_pop(t_lstmap *map, t_size i);

t_bool		lstmap_rm(t_lstmap *map, t_size i);

t_bool		lstmap_rmele(t_lstmap *map, void *key);

void		lstmap_clear(t_lstmap *map);

void		lstmap_free(t_lstmap *map);

void		lstmap_frees(t_lstmap *map);

t_mapentry	*mapentry_new(void *key, void *value);

t_mapentry	*mapentry_get(t_lstmap *map, t_size i);

#endif
