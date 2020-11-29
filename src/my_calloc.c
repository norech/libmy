/*
** EPITECH PROJECT, 2020
** my_calloc
** File description:
** Source code
*/
#include <my.h>
#include <stdlib.h>

void *my_calloc(int size, int count)
{
    void *allocated = malloc(size * count);

    my_bzero((char *)allocated, size * count);
    return (allocated);
}