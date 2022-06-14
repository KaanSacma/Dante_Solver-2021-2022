/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my
*/

#pragma once
#include <stdbool.h>
#define IS_SPACE(c) ((c == ' ' || c == '\t') ? true : false)

void my_putchar(char c);
int my_putstr(char const *str);
char *my_strcat(char *dest, char const *src);
int my_tablen(char **tab);
char **my_tabdup(char **tab);
int my_strcmp(char *str1, char *str2);
char *my_strcpy(char *str, char const *str2);
char *my_strdup(char const *str);
int my_strlen(char const *str);
char **str_to_array(const char *str, const char sep);
int my_strncmp(const char *str1, const char *str2, int len);
char *my_concat(char *str1, char *str2);
char *my_cleanstr(char *str);
int my_getnbr(char *str);
void free_tab(char **tab);
void print_tab(char **tab);
