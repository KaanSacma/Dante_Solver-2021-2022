/*
** EPITECH PROJECT, 2022
** init_maze.c
** File description:
** init_maze.c
*/

#include <malloc.h>
#include <unistd.h>
#include "generator.h"

void create_basic_map(maze_t *maze)
{
    for (int i = 0; i < maze->heigth; i++) {
        maze->tab[i] = malloc(sizeof(char) * (maze->width + 1));
        maze->tab[i][maze->width] = '\0';
        for (int j = 0; j < maze->width; j++)
            maze->tab[i][j] = '*';
    }
    for (int i = 0; i < maze->heigth; i += 2) {
        for (int j = 0; j < maze->width; j += 1)
            maze->tab[i][j] = 'X';
    }
}

void create_maze(maze_t *maze)
{
    for (int i = 0; i < maze->heigth; i += 1) {
        for (int j = 0; j < maze->width; j += 2)
            maze->tab[i][j] = 'X';
    }
    for (int i = 1; i < maze->width - 1; i += 1)
        maze->tab[1][i] = '*';
    for (int i = 1; i < maze->heigth - 1; i += 1) {
        maze->tab[i][1] = '*';
    }
    maze->tab[0][0] = '*';
    maze->tab[0][1] = '*';
    maze->tab[maze->heigth - 1][maze->width - 2] = '*';
    maze->tab[maze->heigth - 1][maze->width - 1] = '*';
}