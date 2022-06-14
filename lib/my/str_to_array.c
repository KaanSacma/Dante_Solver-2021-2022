/*
** EPITECH PROJECT, 2022
** str_to_array.c
** File description:
** str_to_array
*/

#include <stdlib.h>
#include <string.h>
#include "my.h"

int my_strlen(char const *str);

int find_nb_seps(const char *str, const char sep)
{
    int seps = 0;

    if (str == NULL)
        return 0;
    for (int i = 0; i < my_strlen(str); i += 1) {
        if (str[i] == sep)
            seps += 1;
    }
    return seps;
}

void fill_word(const char *str, const char sep, char *dest, int *j)
{
    int count = 0;

    for (; str[(*j)] != '\0' && str[(*j)] != sep; (*j) += 1) {
        dest[count] = str[(*j)];
        count += 1;
    }
    dest[count] = '\0';
    if (str[(*j)] != '\0') {
        for (; str[(*j)] == sep; (*j) += 1);
    }
}

int word_len(const char *str, const char sep, int *i)
{
    int result = 0;

    for (; str[(*i)] != '\0' && str[(*i)] != sep; (*i) += 1) {
        result += 1;
    }
    if (str[(*i)] != '\0') {
        for (; str[(*i)] == sep; (*i) += 1);
    }
    return result;
}

char **str_to_array(const char *str, const char sep)
{
    int i = 0;
    int j = 0;
    int nb_sep = find_nb_seps(str, sep);
    char **new = malloc(sizeof(char *) * (nb_sep + 1 + 1));
    int row = 0;

    if (str == NULL || new == NULL)
        return NULL;
    for (; row <= nb_sep; row += 1) {
        new[row] = malloc(sizeof(char) * (word_len(str, sep, &i) + 1));
        if (!new[row])
            return NULL;
        fill_word(str, sep, new[row], &j);
    }
    new[row] = NULL;
    return new;
}