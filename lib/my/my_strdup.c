/*
** EPITECH PROJECT, 2022
** my_strdup.c
** File description:
** my_strdup
*/

#include <stdlib.h>
#include "my.h"

char *my_strdup(char const *str)
{
    int i  = my_strlen(str);
    char *file = malloc(sizeof(char) * (i + 1));

    if (!file)
        return NULL;
    for (i = 0; str[i] != '\0'; i++)
        file[i] = str[i];
    file[i] = '\0';
    return file;
}
