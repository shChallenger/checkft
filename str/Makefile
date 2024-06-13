SRC_FILES = \
ecp.c \
ecpc.c \
ptr_cpy.c \
ptr_eq.c \
ptr_ncpy.c \
str_add.c \
str_build.c \
str_cmp.c \
str_cmpi.c \
str_contains.c \
str_count.c \
str_countw.c \
str_cpy.c \
str_dup.c \
str_end.c \
str_eq.c \
str_eqi.c \
str_ewith.c \
str_idget.c \
str_idof.c \
str_idofs.c \
str_join.c \
str_len.c \
str_lidget.c \
str_lidof.c \
str_lidofs.c \
str_lower.c \
str_ncmp.c \
str_ncmpi.c \
str_ncpy.c \
str_ndup.c \
str_rpt.c \
str_sub.c \
str_swith.c \
str_trim.c \
str_upd.c \
str_upper.c \
str_vdup.c \
str_wend.c \
str_wnext.c \
to_lower.c \
to_upper.c

SRC = $(addprefix srcs/, $(SRC_FILES))

OBJ_FILES = $(SRC_FILES:.c=.o)
OBJ_FOLDER = objs/
OBJ = $(addprefix $(OBJ_FOLDER), $(OBJ_FILES))

ANALYZE_FOLDER = analyze/

LIB = libstr.a

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

aclean:
	rm -rf $(ANALYZE_FOLDER)

fclean:	clean aclean
	rm -f $(LIB)

analyze:	$(ANALYZE_FOLDER) $(SRC)
	clang --analyze $(CFLAGS) $(SRC)
	mv *.plist analyze/

$(ANALYZE_FOLDER):
	mkdir $(ANALYZE_FOLDER)

re: fclean all

.PHONY: all clean fclean aclean analyze re
