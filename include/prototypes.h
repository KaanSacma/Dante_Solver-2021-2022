/*
** EPITECH PROJECT, 2021
** B-PSU-200-BRU-2-1-mysokoban-kaan.sacma
** File description:
** prototypes.h
*/

#pragma once

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include "struct.h"

void solver(char **map);
void my_putchar(char c);
void my_putstr(char *str);
void free_tab(char **tab);
void free_tab_int(int **tab);
int len_row(char **map);
int len_line(char *str);
int get_max_x(int **map);
int get_exit_y(int **map);
int **copy_map(char **map);
int **a_star(int **map, int rows, int cols);
char **get_map(char *file);
char **str_to_str_array(char *str, char sep);
char **pathfinding(char **map, int **intmap, int x, int y);
