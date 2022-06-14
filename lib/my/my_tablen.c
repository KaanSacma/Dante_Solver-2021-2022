/*
** EPITECH PROJECT, 2022
** my_tablen.c
** File description:
** tablen.c
*/

#include <stdlib.h>
#include "my.h"

int my_tablen(char **tab)
{
    int count = 0;

    for (int i = 0; tab[i] != NULL; i++)
        count++;
    return (count);
}