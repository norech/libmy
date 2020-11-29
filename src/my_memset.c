/*
** EPITECH PROJECT, 2020
** my_memset
** File description:
** Set bytes to zero
*/
#include <stdlib.h>

void *my_memset(void *res, size_t size)
{
    unsigned char *bytes = (unsigned char *)res;

    while (size) {
        bytes[size] = '\0';
        size--;
    }
    return (res);
}