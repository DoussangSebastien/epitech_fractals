/*
** EPITECH PROJECT, 2025
** project.h
** File description:
** Epitech project.h
*/

#ifndef PROJECT_H
    #define PROJECT_H
    #define SUCCESS 0
    #define FAILURE 84
    #include <unistd.h>
    #include <stdlib.h>
    #include "struct_fractals.h"

int fractal(int argc, char const *argv[]);
int my_putstr_error(const char *message);
int my_strlen(char const *str);
char *my_strdup(char const *src);
char *expand_fractal(fractal_t *f, char const *p1, char const *p2);

#endif /* PROJECT_H */
