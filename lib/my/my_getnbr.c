/*
** EPITECH PROJECT, 2022
** my_getnbr.c
** File description:
** my_getnbr
*/

#include "my.h"

int check_sign(char c)
{
    if (c == '-')
        return -1;
    else
        return 1;
}

int my_getnbr(char *str)
{
    int i = 0;
    int nbr = 0;
    int sig = 1;

    for (; str[i] == '+' || str[i] == '-'; i++)
        sig = check_sign(str[i]);
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            nbr *= 10;
            nbr = nbr + str[i] - '0';
        } else
            return nbr * sig;
        if (nbr < 0)
            return 0;
        i++;
    }
    return nbr * sig;
}