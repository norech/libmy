/*
** EPITECH PROJECT, 2020
** my_strpad
** File description:
** Source code
*/
#include <my.h>
#include <stdlib.h>

void my_strpad_start(char *dest, char pattern, int size)
{
    char *dup = my_strdup(dest);
    int i = 0;
    int dest_len = my_strlen(dest);
    int fill_len = size - dest_len;

    while (i < fill_len) {
        dest[i] = pattern;
        i++;
    }
    my_strncat(dest, dup, dest_len);
    free(dup);
    if (size < dest_len)
        dest[size] = '\0';
}