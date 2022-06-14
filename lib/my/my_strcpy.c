/*
** EPITECH PROJECT, 2022
** my_strcpy.c
** File description:
** my_strcpy
*/

char *my_strcpy(char *str, char const *str2)
{
    int i = 0;

    for (;str2[i] != '\0'; i += 1) {
        str[i] = str2[i];
    }
    str[i] = '\0';
    return str;
}