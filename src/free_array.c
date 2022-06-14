/*
** EPITECH PROJECT, 2021
** Dante Star
** File description:
** free_array.c
*/

#include <stdlib.h>

void free_tab(char **tab)
{
    for (int i = 0; tab[i] != NULL; i += 1)
        free(tab[i]);
    free(tab);
}

void free_tab_int(int **tab)
{
    for (int i = 0; tab[i] != NULL; i += 1)
        free(tab[i]);
    free(tab);
}
