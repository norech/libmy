/*
** EPITECH PROJECT, 2020
** my_str_isupper
** File description:
** Check if string is uppercase
*/
#include <my.h>

int is_char_uppercase(char c)
{
    return (c >= 'A' && c <= 'Z');
}

int my_str_isupper(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (is_char_uppercase(str[i]))
            return (0);
        i++;
    }

    return (1);
}
