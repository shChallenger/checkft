SRC = checkft.c
OBJ = $(SRC:.c=.o)

NAME = checkft
LIBS = getft/libgetft.a \
getln/libgetln.a \
ctreat/libctreat.a \
lstmap/liblstmap.a \
lst/liblst.a \
str/libstr.a

CC = gcc
CFLAGS = -g -O3 -Wall -Wextra -Wpedantic -Werror

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(LIBS)

%.o:	%.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
