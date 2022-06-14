/*
** EPITECH PROJECT, 2022
** check_maze.c
** File description:
** check_maze.c
*/

#include <stdbool.h>
#include "my.h"

bool check_what(char *arg)
{
    if (my_strcmp(arg, "perfect") == 0 || my_strcmp(arg, "imperfect") == 0)
        return false;
    return true;
}