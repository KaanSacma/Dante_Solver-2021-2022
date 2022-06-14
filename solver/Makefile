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
		src/draw_path.c \
		src/lib/str_to_str_array.c \
		src/lib/my_putchar.c \
		src/lib/my_putstr.c

OBJS = $(SRC:.c=.o)

RM = rm -f

CFLAGS = -W -Wall -Wextra -Werror -g -I../include

NAME = solver

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
