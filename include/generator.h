/*
** EPITECH PROJECT, 2022
** generator.h
** File description:
** generator.h
*/

#ifndef B_CPE_200_BRU_2_1_DANTE_RAPHAEL_ELEMQUIES_GENERATOR_H
    #define B_CPE_200_BRU_2_1_DANTE_RAPHAEL_ELEMQUIES_GENERATOR_H
    #include <stdbool.h>

typedef struct maze_s {
    char **tab;
    int heigth;
    int width;
    bool perfect;
} maze_t;

#endif
