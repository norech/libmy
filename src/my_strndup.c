/*
** EPITECH PROJECT, 2020
** my_strdup
** File description:
** Duplicates str
*/
#include <stdlib.h>
#include <my.h>

char *my_strndup(char const *src, int n)
{
    char *dup = malloc(sizeof(char) * (n + 1));
    my_strncpy(dup, src, n);
    dup[n] = '\0';
    return (dup);
}
