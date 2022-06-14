/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main.c
*/

#include <malloc.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"
#include "solver.h"
#include "generator.h"

bool check_arg(char *arg)
{
    for (int i = 0; arg[i] != '\0'; i++) {
        if (arg[i] >= '0' && arg[i] <= '9')
            return false;
        if (arg[i] >= '!' && arg[i] <= '/')
            return true;
    }
    return true;
}

void create_map(maze_t *maze)
{
    create_basic_map(maze);
    create_maze(maze);
}

void error_handling(maze_t *maze, int argc, char *argv3)
{
    if (maze->tab == NULL)
        return;
    if (argc < 3 || argc > 4) {
        write(2, "Wrong arguments!\n", 17);
        return;
    }
    if (check_what(argv3) == true) {
        write(2, "Write 'perfect' or 'imperfect' maze\n", 37);
        return;
    }
}

int main(int argc, char **argv)
{
    maze_t *maze = malloc(sizeof(maze_t));
    maze->width = my_getnbr(argv[1]);
    maze->heigth = my_getnbr(argv[2]);
    maze->perfect = check_what(argv[3]);
    maze->tab = malloc(sizeof(char *) * (maze->heigth + 1));
    maze->tab[maze->heigth] = NULL;

    if (maze->width == 0 && maze->heigth == 0) return 84;
    if ((maze->width < 0 || maze->heigth < 0) || (maze->width < 0
    && maze->heigth < 0)) return 84;
    create_map(maze);
    if (check_arg(argv[1]) == true || check_arg(argv[2]) == true) {
        write(2, "Wrong Number!\n", 15); return 84;
    }
    error_handling(maze, argc, argv[3]);
    if (argc == 4)
        create_perfect_maze(maze, argv[3]);
    create_imperfect_maze(maze, argv[3]);
    print_tab(maze->tab);
    return 0;
}
