##
## EPITECH PROJECT, 2021
## Dante Star
## File description:
## Makefile
##

all: build

build:
	make -C solver/
	make -C generator/

clean:
	make clean -C solver/
	make clean -C generator/

fclean:
	make fclean -C solver/
	make fclean -C generator/

re: fclean all