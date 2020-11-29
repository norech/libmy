/*
** EPITECH PROJECT, 2020
** my_strpad
** File description:
** Source code
*/
#include <my.h>

void my_strpad_end(char *dest, char pattern, int size)
{
    int i = my_strlen(dest);
    if (i < size) {
        dest[size] = '\0';
        return;
    }
    while (i < size) {
        dest[i] = pattern;
        i++;
    }
}