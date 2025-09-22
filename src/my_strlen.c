/*
** EPITECH PROJECT, 2024
** my_strlen
** File description:
** my_lib
*/
int my_strlen(char const *str)
{
    int i = 0;

    if (!str)
        return 84;
    while (str[i] != '\0'){
        i++;
    }
    return (i);
}
