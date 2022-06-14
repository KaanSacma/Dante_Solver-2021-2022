/*
** EPITECH PROJECT, 2021
** Dante Star
** File description:
** main.c
*/

#include "prototypes.h"
#include "my.h"

void help_msg(void)
{
    my_putstr("USAGE\n");
    my_putstr("\t./solver {file}\n\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("\tfile: containing a maze only specifics characters:\n");
    my_putstr("\t      *: it's a way.\n");
    my_putstr("\t      X: it's a wall.\n");
}

int main(int ac, char **av)
{
    char **map = NULL;

    if (ac != 2)
        return 84;
    if (av[1][0] == '-' && av[1][1] == 'h') {
        help_msg();
        return 0;
    }
    map = get_map(av[1]);
    if (map == NULL)
        return 84;
    solver(map);
    return 0;
}
