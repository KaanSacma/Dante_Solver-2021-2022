/*
** EPITECH PROJECT, 2021
** Dante Star
** File description:
** main.c
*/

#include "prototypes.h"

int main(int ac, char **av)
{
    char **map = get_map(av[1]);

    if (ac != 2 || map == NULL)
        return 84;
    solver(map);
    return 0;
}
