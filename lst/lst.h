/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourniq <rfourniq@student.42.lu>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:16:06 by rfourniq          #+#    #+#             */
/*   Updated: 2024/06/12 05:11:54 by rfourniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LST_H

# define LST_H

# include "../types.h"

typedef struct s_lstpart
{
	void				*ele;
	struct s_lstpart	*last;
	struct s_lstpart	*next;
}			t_lstpart;

typedef struct s_lst
{
	t_lstpart	*start;
	t_lstpart	*end;
	t_size		size;
	void		(*free)();
	void		*(*dup)();
	int			(*cmp)();
}			t_lst;

// Init a stack lst
void		lst_init(t_lst *lst);

/* Init a stack lst with functions

Prototypes must be :

void	(*free)(void *)
void	*(*dup)(void *)
int		(*cmp)(void *, void *)

*/
void		lst_initf(t_lst *lst, void (*free)(), void *(*dup)(),
				int (*cmp)());

/* Create a new heap lst

Returns NULL if malloc failed */
t_lst		*lst_new(void);

/* Create a new heap lst with functions

Prototypes must be :

void	(*free)(void *)
void	*(*dup)(void *)
int		(*cmp)(void *, void *)

Returns NULL if malloc failed */
t_lst		*lst_newf(void (*free)(), void *(*dup)(),
				int (*cmp)());

/* Create a clone of lst

lst->dup and lst->free functions have to be defined

Returns NULL if malloc failed */
t_lst		*lst_clone(const t_lst *lst);

/* Add an element at the end of lst

Returns TRUE on success, FALSE on failure */
t_bool		lst_add(t_lst *lst, void *ele);

/* Add a non-null element at the end of lst

Returns TRUE on success, FALSE on failure, NELE on null ele */
t_bool		lst_addn(t_lst *lst, void *ele);

/* Add an element at the end of lst

Element is freed on failure (using lst->free)

Returns TRUE on success, FALSE on failure */
t_bool		lst_addf(t_lst *lst, void *ele);

/* Add a non-null element at the end of lst

Element is freed on failure (using lst->free)

Returns TRUE on success, FALSE on failure, NELE on null ele */
t_bool		lst_addnf(t_lst *lst, void *ele);

/* Add all elements of from into dest

This function is leak-safe and uses lst_clone, lst_add

lst->dup and lst->free functions have to be defined

Returns TRUE on success, FALSE on failure */
t_bool		lst_addall(t_lst *dest, t_lst *from);

/* Add a element at the start of lst

Returns TRUE on success, FALSE on failure */
t_bool		lst_add_f(t_lst *lst, void *ele);

/* Add a non-null element at the start of lst

Returns TRUE on success, FALSE on failure, NELE on null ele */
t_bool		lst_addn_f(t_lst *lst, void *ele);

/* Add an element at the start of lst

Element is freed on failure (using lst->free)

Returns TRUE on success, FALSE on failure */
t_bool		lst_addf_f(t_lst *lst, void *ele);

/* Add a non-null element at the start of lst

Element is freed on failure (using lst->free)

Returns TRUE on success, FALSE on failure, NELE on null ele */
t_bool		lst_addnf_f(t_lst *lst, void *ele);

/* Add a element at the index i of lst

Returns TRUE on success, FALSE on failure */
t_bool		lst_add_i(t_lst *lst, void *ele, t_size i);

/* Add a non-null element at the index i of lst

Returns TRUE on success, FALSE on failure, NELE on null ele */
t_bool		lst_addn_i(t_lst *lst, void *ele, t_size i);

/* Add an element at the index i of lst

Element is freed on failure (using lst->free)

Returns TRUE on success, FALSE on failure */
t_bool		lst_addf_i(t_lst *lst, void *ele, t_size i);

/* Add a non-null element at the index i of lst

Element is freed on failure (using lst->free)

Returns TRUE on success, FALSE on failure, NELE on null ele */
t_bool		lst_addnf_i(t_lst *lst, void *ele, t_size i);

/* Check the presence of ele in lst

lst->cmp function has to be defined.
lst->cmp should return TRUE if elements are equal.

Returns TRUE on presence, FALSE on absence */
t_bool		lst_contains(const t_lst *lst, void *ele);

/* Retreive the index of first element equal to ele in lst

lst->cmp function has to be defined.
lst->cmp should return TRUE if elements are equal.

Returns index of -1 if no element is equal to ele */
int			lst_indexof(const t_lst *lst, void *ele);

/* Retreive the element at index i

Returns element or NULL if index is invalid */
void		*lst_get(const t_lst *lst, const t_size i);

/* Sort all elements of lst

lst->cmp function has to be defined */
void		lst_sort(const t_lst *lst);

/* Call function f for each element in lst

f prototype must be : void (*f)(void *) */
void		lst_foreach(const t_lst *lst, void (*f)());

/* Call function f for each element in lst

f prototype must be : t_bool (*f)(void *, void *)
Where first arg is p and second arg the current iterated element

If f returns another thing that TRUE, then testeach stops and returns
this result. If all f calls return TRUE, testeach returns TRUE */
t_bool		lst_testeach(t_lst *lst, t_bool (*f)(), void *p);

/* Replace element at index i by element ele

lst->free function has to be defined

Returns TRUE on success, FALSE on bad index
*/
t_bool		lst_set(t_lst *lst, const t_size i, void *ele);

/* Replace element at index i by non-null element ele

lst->free function has to be defined

Returns TRUE on success, FALSE on bad index, NELE if ele is NULL
*/
t_bool		lst_setn(t_lst *lst, const t_size i, void *ele);

/* Replace element at index i by element ele

lst->free function has to be defined
Element is freed on failure (using lst->free)

Returns TRUE on success, FALSE on bad index
*/
t_bool		lst_setf(t_lst *lst, const t_size i, void *ele);

/* Replace element at index i by non-null element ele

lst->free function has to be defined
Element is freed on failure (using lst->free)

Returns TRUE on success, FALSE on bad index, NELE if ele is NULL
*/
t_bool		lst_setnf(t_lst *lst, const t_size i, void *ele);

/* Remove element at index i from lst

Returns removed element or NULL on failure */
void		*lst_pop(t_lst *lst, const t_size i);

/* Remove element at the front of lst

If pop is true, removed element is returned (or NULL on failure)

If pop is false, returns NULL on failure or (void *) TRUE on success*/
void		*lst_rmfirst(t_lst *lst, const t_bool pop);

/* Remove element after "before" in lst

If pop is true, removed element is returned (or NULL on failure)

If pop is false, returns NULL on failure or (void *) TRUE on success*/
void		*lst_rmpart(t_lst *lst, t_lstpart *before, const t_bool pop);

/* Remove element at index i from lst

lst->free function has to be defined

Returns TRUE on success, FALSE on failure */
t_bool		lst_rm(t_lst *lst, const t_size i);

/* Remove first element from lst that is equal to ele

lst->free function has to be defined

Returns TRUE on success, FALSE on failure or if no element was found*/
t_bool		lst_rmele(t_lst *lst, void *ele);

/* Remove all elements of dest that are in from

This function is leak-safe and uses lst_rmele */
t_bool		lst_rmall(t_lst *dest, t_lst *from);

/* Remove all elements from

lst->free function has to be defined */
void		lst_clear(t_lst *lst);

/* Remove all elements and free lst

lst->free function has to be defined */
void		lst_free(t_lst *lst);

/* Create a new lstpart in the heap with element ele

Returns NULL if malloc failed */
t_lstpart	*lstpart_new(void *ele, t_lstpart *last,
				t_lstpart *next);

/* Get lstpart at index i in lst

Returns NULL if index is incorrect */
t_lstpart	*lstpart_get(const t_lst *lst, const t_size i);

/* Free part and his element with fn_free

fn_free prototype must be : void (*fn_free)(void *) */
void		lstpart_free(t_lstpart *part, void (*fn_free)());

#endif
