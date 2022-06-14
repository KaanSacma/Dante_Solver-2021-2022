/*
** EPITECH PROJECT, 2021
** putstr
** File description:
** my_putstr.c
*/

#include "my.h"

void my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i += 1)
        my_putchar(str[i]);
}
