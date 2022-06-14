/*
** EPITECH PROJECT, 2022
** print_tab.c
** File description:
** print_tab
*/

#include <stdlib.h>
#include "my.h"

void print_tab(char **tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        my_putstr(tab[i]);
        if (tab[i + 1] != NULL)
            my_putchar('\n');
    }
}