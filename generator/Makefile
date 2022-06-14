##
## EPITECH PROJECT, 2022
## makefile
## File description:
## makefile
##

SRC     =		src/init_maze.c		\
				src/perfect_maze.c	\
				src/imperfect_maze.c	\
				src/check_maze.c		\
				src/main.c

OBJ     =		$(SRC:.c=.o)

NAME    =		generator

CC      =		gcc

CFLAGS  +=		-W -Wall -Wextra -g -I../include -I../lib/my

LDFLAGS +=		-L../lib/my -lmy

RM      =		rm -f

$(NAME):	$(OBJ)
		make -C ../lib/my
		$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

all:	$(NAME)

clean:
		make -C ../lib/my clean
		$(RM) $(OBJ)

fclean:	clean
		make -C ../lib/my fclean
		$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re
