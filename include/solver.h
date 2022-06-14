/*
** EPITECH PROJECT, 2022
** solver.h
** File description:
** solver.h
*/

#ifndef B_CPE_200_BRU_2_1_DANTE_RAPHAEL_ELEMQUIES_SOLVER_H
    #define B_CPE_200_BRU_2_1_DANTE_RAPHAEL_ELEMQUIES_SOLVER_H
    #include <stdbool.h>
    #include "generator.h"

bool check_what(char *arg);
void create_perfect_maze(maze_t *maze, char *arg);
void create_imperfect_maze(maze_t *maze, char *arg);
void create_basic_map(maze_t *maze);
void create_maze(maze_t *maze);

#endif
