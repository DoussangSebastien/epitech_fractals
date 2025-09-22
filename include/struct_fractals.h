/*
** EPITECH PROJECT, 2024
** fractal
** File description:
** struct fractal
*/

#ifndef FRACTAL_H_
    #define FRACTAL_H_

typedef struct s_fractal {
    char *data;
    int old_width;
    int old_height;
    int new_width;
    int new_height;
    int pattern_width;
    int pattern_height;
} fractal_t;

typedef struct {
    fractal_t *f;
    char *output;
    char const *p1;
    char const *p2;
    int index;
} expand_t;

#endif /* FRACTAL_H_ */
