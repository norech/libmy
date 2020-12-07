/*
** EPITECH PROJECT, 2020
** my_str_repeat
** File description:
** Repeat string n times
*/
#include <my.h>
#include <stdarg.h>

char *my_str_repeat(char const *str, int count)
{
    char *output = malloc(sizeof(char) * (my_strlen(str) * count + 1));

    for (int i = 0; i < count; i++) {
        my_strcat(output, str);
    }
    return (output);
}
