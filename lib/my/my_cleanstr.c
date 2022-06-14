/*
** EPITECH PROJECT, 2022
** my_cleanstr.c
** File description:
** my_cleanstr
*/

#include <stdlib.h>
#include "my.h"

int pimp_len(char *str)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (!IS_SPACE(str[i]))
            count++;
        else if (IS_SPACE(str[i]) && (!IS_SPACE(str[i + 1])) &&
                str[i + 1] != '\0') {
            count++;
        }
    }
    return count;
}

char *my_cleanstr(char *str)
{
    char *result = malloc(sizeof(char) * pimp_len(str) + 1);
    int j = 0;

    if (!result)
        return NULL;
    for (int i = 0; str[i] != '\0'; i++) {
        if (!IS_SPACE(str[i])) {
            result[j] = str[i];
            j += 1;
        } else if (IS_SPACE(str[i]) &&
        (!IS_SPACE(str[i + 1]) && str[i + 1] != '\0')) {
            result[j] = ' ';
            j += 1;
        }
    }
    result[j] = '\0';
    return result;
}

