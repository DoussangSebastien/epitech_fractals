/*
** EPITECH PROJECT, 2025
** test
** File description:
** fractal.c
*/

#include "fractals.h"

static void get_pattern_size(char const *pattern, fractal_t *f)
{
    int width = 0;
    int height = 1;

    while (pattern[width] != '\0' && pattern[width] != '@')
        width++;
    for (int i = 0; pattern[i] != '\0'; i++) {
        if (pattern[i] == '@')
            height++;
    }
    f->pattern_width = width;
    f->pattern_height = height;
}

static void get_new_size(fractal_t *f)
{
    f->new_width = f->old_width * f->pattern_width;
    f->new_height = f->old_height * f->pattern_height;
}

static fractal_t *init_fractal(void)
{
    fractal_t *f = malloc(sizeof(fractal_t));

    if (!f)
        return NULL;
    f->data = my_strdup("#\n");
    if (!f->data) {
        free(f);
        return NULL;
    }
    f->old_width = 1;
    f->old_height = 1;
    return f;
}

static int draw_fractal(int iterations,
    char const *p1, char const *p2)
{
    fractal_t *f = init_fractal();
    char *new_fractal = NULL;
    int ret = 0;

    if (!f)
        return my_putstr_error("error on init fracatl\n");
    get_pattern_size(p1, f);
    for (int i = 0; i < iterations; i++) {
        get_new_size(f);
        new_fractal = expand_fractal(f, p1, p2);
        free(f->data);
        f->data = new_fractal;
        f->old_width = f->new_width;
        f->old_height = f->new_height;
    }
    ret = write(1, f->data, my_strlen(f->data));
    free(f->data);
    free(f);
    return ret;
}

int fractal(int argc, char const *argv[])
{
    int n = atoi(argv[1]);

    return (draw_fractal(n, argv[2], argv[3]) == -1) ? FAILURE : SUCCESS;
}
