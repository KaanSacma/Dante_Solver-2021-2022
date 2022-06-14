##
## EPITECH PROJECT, 2021
## MakeFile
## File description:
## make
##

SRC =	my_putchar.c \
		my_putstr.c \
		str_to_str_array.c

OBJS = $(SRC:.c=.o)

CFLAGS = -W -Wall -Wextra -g

NAME = libmy.a

all: 	$(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	cp $(NAME) ../../include

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -f ../../include/$(NAME)

re: fclean all
