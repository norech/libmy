/*
** EPITECH PROJECT, 2020
** my_free_strarray
** File description:
** Source code
*/
#include <stdlib.h>

void my_free_strarray(char **array)
{
    int i = 0;

    while (array[i]) {
        free(array[i]);
        i++;
    }
    free(array);
}