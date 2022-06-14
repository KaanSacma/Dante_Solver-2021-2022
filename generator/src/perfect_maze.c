/*
** EPITECH PROJECT, 2022
** perfect_maze.c
** File description:
** perfect_maze.c
*/

#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "solver.h"
#include "generator.h"
#include "my.h"

void create_perfect_maze(maze_t *maze, char *arg)
{
    int random = 0;

    srand(time(0));
    if (maze->perfect == false && my_strcmp(arg, "perfect") == 0) {
        for (int i = 3; i < maze->heigth; i += 2) {
            for (int j = 3; j < maze->width; j += 2) {
                random = rand() % 2;
                if (random == 0)
                    maze->tab[i][j - 1] = '*';
                else
                    maze->tab[i - 1][j] = '*';
            }
        }
    }
}