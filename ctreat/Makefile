SRC_FILES = \
ctreat.c

SRC = $(addprefix srcs/, $(SRC_FILES))

OBJ_FOLDER = objs/
OBJ_FILES = $(SRC_FILES:.c=.o)
OBJ = $(addprefix $(OBJ_FOLDER), $(OBJ_FILES))

LIB = libctreat.a

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

re:	clean all

.PHONY:	all clean fclean re
