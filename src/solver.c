/*
** EPITECH PROJECT, 2021
** Dante Star
** File description:
** solver.c
*/

#include "prototypes.h"
#include "my.h"

void printmap(char **map)
{
    for (int i = 0; map[i] != NULL; i += 1) {
        my_putstr(map[i]);
        if (map[i + 1] != NULL)
            my_putchar('\n');
    }
}

int get_max_x(int **map)
{
    int i = 0;

    for (i = 0; map[i] != NULL; i += 1);
    return i;
}

int get_exit_y(int **map)
{
    int i = get_max_x(map) - 1;
    int j = 0;

    for (j = 0; map[i][j + 1] != -2; j += 1);
    return j;
}

void solver(char **map)
{
    int **copy = copy_map(map);

    copy[0][0] = 1;
    copy = a_star(copy, 0, 0);
    map = pathfinding(map, copy, get_max_x(copy) - 1, get_exit_y(copy));
    printmap(map);
    free_tab(map);
    free_tab_int(copy);
}
