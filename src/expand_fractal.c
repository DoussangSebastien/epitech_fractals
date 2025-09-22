/*
** EPITECH PROJECT, 2025
** test
** File description:
** expand_fractal.c
*/

#include "fractals.h"

char *expand_fractal(fractal_t *f, char const *p1, char const *p2)
{
    int new_size = f->new_width * f->new_height + f->new_height + 1;
    char *new_fractal = malloc(new_size);
    int index = 0;
    char sep = '\0';
    char const *p = NULL;

    if (!new_fractal)
        return NULL;
    for (int i = 0; i < f->old_height; i++) {
        for (int j = 0; j < f->pattern_height; j++) {
            for (int k = 0; k < f->old_width; k++) {
                p = (f->data[i * (f->old_width + 1) + k] == '#') ? p1 : p2;
                for (int q = 0; q < f->pattern_width; q++) {
                    sep = p[j * (f->pattern_width + 1) + q];
                    new_fractal[index] = (sep == '@') ? '\n' : sep;
                    index++;
                }
            }
            new_fractal[index] = '\n';
            index++;
        }
    }
    new_fractal[index] = '\0';
    return new_fractal;
}
