SRC_FILES = \
lstmap_add.c \
lstmap_addf.c \
lstmap_addn.c \
lstmap_addnf.c \
lstmap_clear.c \
lstmap_clone.c \
lstmap_contains.c \
lstmap_foreach.c \
lstmap_free.c \
lstmap_frees.c \
lstmap_get.c \
lstmap_getele.c \
lstmap_init.c \
lstmap_inits.c \
lstmap_new.c \
lstmap_news.c \
lstmap_pop.c \
lstmap_put.c \
lstmap_putf.c \
lstmap_putn.c \
lstmap_putnf.c \
lstmap_rm.c \
lstmap_rmele.c \
lstmap_testeach.c \
mapentry_get.c \
mapentry_new.c

SRC = $(addprefix srcs/, $(SRC_FILES))

OBJ_FOLDER = objs/
OBJ_FILES = $(SRC_FILES:.c=.o)
OBJ = $(addprefix $(OBJ_FOLDER), $(OBJ_FILES))

LIB = liblstmap.a

AR = ar
CC = gcc
CFLAGS = -g -O3 -Wall -Wextra -Wpedantic -Werror

all:	$(LIB)

$(LIB):	$(OBJ_FOLDER) $(OBJ)
	$(AR) -r $(LIB) $(OBJ)

$(OBJ_FOLDER):
	mkdir $(OBJ_FOLDER)

objs/%.o:	srcs/%.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJ)
	rm -rf $(OBJ_FOLDER)

fclean:	clean
	rm -f $(LIB)

re:	fclean all

.PHONY: all clean fclean re
