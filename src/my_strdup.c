/*
** EPITECH PROJECT, 2024
** my_ls
** File description:
** my_strdup.c
*/
#include "fractals.h"

char *my_strdup(char const *src)
{
    char *res = malloc(sizeof(char) * my_strlen(src));

    for (int i = 0; src[i] != '\0'; i++){
        res[i] = src[i];
        if (src[i + 1] == '\0')
            res[i + 1] = '\0';
    }
    return res;
}
