/*
** EPITECH PROJECT, 2021
** Dante Star
** File description:
** draw_path.c
*/

#include "prototypes.h"

char **go_left(char **map, int **intmap, int x, int y)
{
    if (y - 1 > -1 && intmap[x][y - 1] != -2 &&
intmap[x][y - 1] != -1 && intmap[x][y - 1] < intmap[x][y]) {
            map[x][y] = 'o';
            pathfinding(map, intmap, x, y - 1);
        }
    return map;
}

char **go_up(char **map, int **intmap, int x, int y)
{
    if (x - 1 > -1 && intmap[x - 1][y] != -2 &&
intmap[x - 1][y] != -1 && intmap[x - 1][y] < intmap[x][y]) {
            map[x][y] = 'o';
            pathfinding(map, intmap, x - 1, y);
        }
    return map;
}

char **go_down(char **map, int **intmap, int x, int y)
{
    int max_x = get_max_x(intmap);

    if (x + 1 < max_x && intmap[x + 1][y] != -2 &&
intmap[x + 1][y] != -1 && intmap[x + 1][y] < intmap[x][y]) {
            map[x][y] = 'o';
            pathfinding(map, intmap, x + 1, y);
        }
    return map;
}

char **go_right(char **map, int **intmap, int x, int y)
{
    int max_y = get_exit_y(intmap);

    if (y + 1 < max_y && intmap[x][y + 1] != -2 &&
intmap[x][y + 1] != -1 && intmap[x][y + 1] < intmap[x][y]) {
            map[x][y] = 'o';
            pathfinding(map, intmap, x, y + 1);
        }
    return map;
}

char **pathfinding(char **map, int **intmap, int x, int y)
{
    if (x > 0 || y > 0) {
        map = go_left(map, intmap, x, y);
        map = go_up(map, intmap, x, y);
        map = go_right(map, intmap, x, y);
        map = go_down(map, intmap, x, y);
    }
    map[0][0] = 'o';
    return map;
}
