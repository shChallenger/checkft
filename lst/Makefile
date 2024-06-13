SRC_FILES = \
lst_add_f.c \
lst_add_i.c \
lst_add.c \
lst_addall.c \
lst_addf_f.c \
lst_addf_i.c \
lst_addf.c \
lst_addn_f.c \
lst_addn_i.c \
lst_addn.c \
lst_addnf_f.c \
lst_addnf_i.c \
lst_addnf.c \
lst_clear.c \
lst_clone.c \
lst_contains.c \
lst_foreach.c \
lst_free.c \
lst_get.c \
lst_indexof.c \
lst_init.c \
lst_initf.c \
lst_new.c \
lst_newf.c \
lst_pop.c \
lst_rm.c \
lst_rmall.c \
lst_rmele.c \
lst_rmfirst.c \
lst_rmpart.c \
lst_set.c \
lst_setf.c \
lst_setn.c \
lst_setnf.c \
lst_sort.c \
lst_testeach.c \
lstpart_free.c \
lstpart_get.c \
lstpart_new.c \

SRC = $(addprefix srcs/, $(SRC_FILES))

LIB = liblst.a

OBJ_FOLDER = objs/
OBJ_FILES = $(SRC_FILES:.c=.o)
OBJ = $(addprefix $(OBJ_FOLDER), $(OBJ_FILES))

AR = ar
CC = gcc
CFLAGS = -g -O3 -Wall -Wextra -Wpedantic -Werror

all:	$(LIB)

$(LIB):	$(OBJ_FOLDER) $(OBJ)
	$(AR) -r $(LIB) $(OBJ)

$(OBJ_FOLDER):
	mkdir $(OBJ_FOLDER)

objs/%.o: srcs/%.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJ)
	rm -rf $(OBJ_FOLDER)

fclean:	clean
	rm -f $(LIB)

re:	fclean all

.PHONY:	all clean fclean re
