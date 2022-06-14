/*
** EPITECH PROJECT, 2022
** B-PSU-101-BRU-1-1-minishell1-raphael.elemquies2
** File description:
** my_strncmp
*/

int my_strncmp(char *str1, char *str2, int len)
{
    int i = 0;

    for (;str1[i] == str2[i] && str1[i] && str2[i] && i < len; i += 1);
    if ((str1[i] == '\0' && str2[i] == '\0') || i == len)
        return (0);
    else if (str1[i] > str2[i])
        return (1);
    else
        return (-1);
}