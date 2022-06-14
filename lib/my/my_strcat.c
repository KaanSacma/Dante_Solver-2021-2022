/*
** EPITECH PROJECT, 2022
** my_strcat.c
** File description:
** my_strcat
*/

#include <stdlib.h>
#include "my.h"

char *my_strcat(char *dest, const char *src)
{
    int dest_len = 0;
    int src_len = 0;

    if (!dest || !src)
        return dest;
    dest_len = my_strlen(dest);
    src_len = my_strlen(src);
    for (int i = 0; i < src_len; i += 1)
        dest[dest_len + i] = src[i];
    dest[dest_len + src_len] = '\0';
    return dest;
}
