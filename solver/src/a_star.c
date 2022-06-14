/*
** EPITECH PROJECT, 2021
** Dante Star
** File description:
** a_star.c
*/

#include <unistd.h>
#include <stdio.h>
#include "prototypes.h"

int **go_right_nb(int **map, int rows, int cols)
{
    if (map[rows][cols + 1] != -2 && map[rows][cols + 1] != -1 &&
map[rows][cols + 1] == 0) {
        map[rows][cols + 1] = map[rows][cols] + 1;
        a_star(map, rows, cols + 1);
    }
    return map;
}

int **go_down_nb(int **map, int rows, int cols)
{
    if (map[rows + 1] != NULL && map[rows + 1][cols] != -2 &&
map[rows + 1][cols] != -1 && map[rows + 1][cols] == 0) {
        map[rows + 1][cols] = map[rows][cols] + 1;
        a_star(map, rows + 1, cols);
    }
    return map;
}

int **go_up_nb(int **map, int rows, int cols)
{
    if (rows - 1 > -1 && map[rows - 1][cols] != -2 &&
map[rows - 1][cols] != -1 && map[rows - 1][cols] == 0) {
        map[rows - 1][cols] = map[rows][cols] + 1;
        a_star(map, rows - 1, cols);
    }
    return map;
}

int **go_left_nb(int **map, int rows, int cols)
{
    if (cols - 1 > -1 && map[rows][cols - 1] != -2 &&
map[rows][cols - 1] != -1 && map[rows][cols - 1] == 0) {
        map[rows][cols - 1] = map[rows][cols] + 1;
        a_star(map, rows, cols - 1);
    }
    return map;
}

int **a_star(int **map, int rows, int cols)
{
    if (map[rows + 1] != NULL || map[rows][cols + 1] != -2) {
        map = go_right_nb(map, rows, cols);
        map = go_down_nb(map, rows, cols);
        map = go_left_nb(map, rows, cols);
        map = go_up_nb(map, rows, cols);
    }
    return map;
}
