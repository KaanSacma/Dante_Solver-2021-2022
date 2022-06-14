/*
** EPITECH PROJECT, 2021
** Dante Star
** File description:
** copymap.c
*/

#include <unistd.h>
#include <stdlib.h>

int len_row(char **map)
{
    int count = 0;

    for (count = 0; map[count] != NULL; count += 1);
    return count;
}

int len_line(char *str)
{
    int count = 0;

    for (count = 0; str[count] != '\0'; count += 1);
    return count;
}

int **copy_map(char **map)
{
    int i = 0;
    int j = 0;
    int **cpy = malloc(sizeof(int *) * (len_row(map) + 1));

    for (i = 0; map[i] != NULL; i += 1) {
        cpy[i] = malloc(sizeof(int) * (len_line(map[i]) + 1));
        for (j = 0; map[i][j] != '\0'; j += 1) {
            if (map[i][j] == 'X')
                cpy[i][j] = -1;
            else
                cpy[i][j] = 0;
        }
        cpy[i][j] = -2;
    }
    cpy[i] = NULL;
    return cpy;
}
