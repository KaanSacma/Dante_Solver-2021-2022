/*
** EPITECH PROJECT, 2022
** my_tabdup.c
** File description:
** my_tabdup.c
*/

#include <stdlib.h>
#include "my.h"

char **my_tabdup(char **tab)
{
    int i = my_tablen(tab);
    char **tmp = malloc(sizeof(char *) * (i + 1));

    if (!tab || !tmp)
        return NULL;
    for (i = 0; tab[i] != NULL; i++)
        tmp[i] = my_strdup(tab[i]);
    tmp[i] = NULL;
    return (tmp);
}