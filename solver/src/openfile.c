/*
** EPITECH PROJECT, 2021
** Dante Star
** File description:
** openfile.c
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "struct.h"
#include "prototypes.h"

int valid_char(char c)
{
    char *list = "*X\n";

    for (int i = 0; list[i] != '\0'; i += 1) {
        if (c == list[i])
            return 0;
    }
    return 1;
}

int check_file(char *str)
{
    int count_way = 0;

    for (int i = 0; str[i] != '\0'; i += 1) {
        if (valid_char(str[i]) == 1)
            return 1;
        if (str[i] == '*')
            count_way += 1;
    }
    if (count_way == 0)
        return 1;
    return 0;
}

char **read_file_turn_array(int fd, char *map, struct stat st)
{
    char **content = NULL;

    read(fd, map, st.st_size);
    map[st.st_size] = '\0';
    if (check_file(map) == 0)
        content = str_to_str_array(map, '\n');
    return content;
}

char **get_map(char *file)
{
    struct stat st;
    char *map = NULL;
    char **content = NULL;
    int fd = 0;

    if (stat(file, &st) == -1)
        return NULL;
    fd = open(file, O_RDONLY);
    if (fd == -1)
        return NULL;
    map = malloc(sizeof(char) * (st.st_size + 1));
    content = read_file_turn_array(fd, map, st);
    if (content == NULL) {
        free(map);
        return NULL;
    }
    free(map);
    close(fd);
    return content;
}
