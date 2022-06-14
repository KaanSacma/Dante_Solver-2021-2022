/*
** EPITECH PROJECT, 2022
** my_strcmp.c
** File description:
** my_strcmp
*/

int my_strcmp(const char *str1, const char *str2)
{
    int i = 0;

    if (!str1 || !str2)
        return 0;
    for (; str1[i] && str2[i] && (str2[i] == str1[i]); i += 1);
    return (str1[i] - str2[i]);
}