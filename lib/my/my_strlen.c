/*
** EPITECH PROJECT, 2022
** my_strlen.c
** File description:
** my_strlen
*/

int my_strlen(char const *str)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i += 1) {
        count += 1;
    }
    return (count);
}