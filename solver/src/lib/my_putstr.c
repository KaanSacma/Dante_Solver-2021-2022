/*
** EPITECH PROJECT, 2021
** Dante Star
** File description:
** my_putstr.c
*/

#include "prototypes.h"

void my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i += 1)
        my_putchar(str[i]);
}
