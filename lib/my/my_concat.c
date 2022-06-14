/*
** EPITECH PROJECT, 2022
** my_concat.c
** File description:
** my_concat
*/

#include <stdlib.h>
#include "my.h"

char *my_concat(char *str1, char *str2)
{
    int sstr = my_strlen(str2) + 1;
    char *result = malloc(sizeof(char) * (my_strlen(str1) + sstr));
    int count = 0;

    if (!result)
        return NULL;
    for (int i = 0; str1[i] != '\0'; i++, count++)
        result[count] = str1[i];
    for (int j = 0; str2[j] != '\0'; j++, count++)
        result[count] = str2[j];
    result[count] = '\0';
    return result;
}