/*
** EPITECH PROJECT, 2022
** imperfect_maze.c
** File description:
** imperfect_maze.c
*/

#include <stdlib.h>
#include <time.h>
#include "generator.h"
#include "my.h"

void create_imperfect_maze(maze_t *maze, char *arg)
{
    int random = 0;
    int value = 0;

    srand(time(0));
    if (maze->perfect == false && my_strcmp(arg, "imperfect") == 0) {
        if (maze->heigth > 9 && maze->width > 9) value = 3;
        else value = 12;
        for (int i = 3; i < maze->heigth; i += 2) {
            for (int j = 3; j < maze->width; j += 2) {
                random = rand() % value;
                if (random == 0) {
                    maze->tab[i][j - 1] = '*';
                } else if (random == 1) {
                    maze->tab[i - 1][j] = '*';
                } else {
                    maze->tab[i][j - 1] = '*';
                    maze->tab[i - 1][j] = '*';
                }
            }
        }
    }
}