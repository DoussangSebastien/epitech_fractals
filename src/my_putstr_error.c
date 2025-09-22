/*
** EPITECH PROJECT, 2025
** test
** File description:
** my_putstr_error.c
*/

#include "fractals.h"

int my_putstr_error(const char *message)
{
    write(2, message, my_strlen(message));
    return FAILURE;
}
