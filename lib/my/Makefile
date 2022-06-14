##
## EPITECH PROJECT, 2022
## makefile
## File description:
## makefile
##

CC =	gcc

AR =	ar rc

SRC =	my_putstr.c 	\
		my_strlen.c 	\
		my_putchar.c 	\
		my_tablen.c		\
		my_tabdup.c		\
		free_tab.c		\
		print_tab.c		\
		my_strcpy.c		\
		my_strdup.c 	\
		my_strncmp.c 	\
		my_strcmp.c		\
		str_to_array.c 	\
		my_concat.c 	\
		my_cleanstr.c 	\
		my_getnbr.c		\
		my_strcat.c

FILE =	my.h

CFLAGS += -W -Wall -Werror -Wextra -g

OBJ =	$(SRC:.c=.o)

NAME =	libmy.a

$(NAME):	$(OBJ)
	$(AR) -o $(NAME) $(OBJ)
	cp $(NAME) ../
	cp $(FILE) ../../include/

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -f ../$(NAME)

re:	fclean all