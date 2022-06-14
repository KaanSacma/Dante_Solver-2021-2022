/*
** EPITECH PROJECT, 2021
** Unix System Programming2
** File description:
** str_to_str_array.c
*/

#include <stdlib.h>

int find_step(char *str, char sep)
{
    int nb = 0;

    for (int i = 0; str[i] != '\0'; i += 1) {
        if (str[i] == sep)
            nb += 1;
    }
    return nb;
}

int find_len_elem(char *str, char sep)
{
    static int maxelem = 0;
    int count = 0;

    for (; str[maxelem] != sep && str[maxelem]
        != '\0'; maxelem += 1) {
        count += 1;
    }
    maxelem += 1;
    return count;
}

void fill_tab(char *str, char *dest, char sep)
{
    static int maxfill = 0;
    int j = 0;

    for (j = 0; str[maxfill] != sep
        && str[maxfill] != '\0'; j += 1, maxfill += 1)
        dest[j] = str[maxfill];
    maxfill += 1;
    dest[j] = '\0';
}

char **str_to_str_array(char *str, char sep)
{
    int i = 0;
    int len = 0;
    int nb = find_step(str, sep);
    char **tab = malloc(sizeof(char *) * (nb + 2));

    for (i = 0; i < (nb + 1); i += 1) {
        len = find_len_elem(str, sep);
        tab[i] = malloc(sizeof(char) * (len + 1));
        fill_tab(str, tab[i], sep);
    }
    tab[i] = NULL;
    return tab;
}
