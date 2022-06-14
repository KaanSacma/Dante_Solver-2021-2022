##
## EPITECH PROJECT, 2021
## MakeFile
## File description:
## make
##

CC = gcc

SRC = 	src/main.c \
		src/copymap.c \
		src/openfile.c \
		src/a_star.c \
		src/solver.c \
		src/free_array.c \
		src/draw_path.c

OBJS = $(SRC:.c=.o)

RM = rm -f

CFLAGS = -W -Wall -Wextra -Werror -g -I./include

NAME = solver

all: $(NAME)

$(NAME): $(OBJS)
	make -C ./lib/my
	$(CC) -o $(NAME) $(OBJS) -L./lib/my -lmy

clean:
	make -C ./lib/my clean
	$(RM) $(OBJS)

fclean: clean
	make -C ./lib/my fclean
	$(RM) $(NAME)

re: fclean all
