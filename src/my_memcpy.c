/*
** EPITECH PROJECT, 2020
** my_memcpy
** File description:
** Copy bytes
*/
#include <stdlib.h>

void *my_memcpy(void *dest, void *val, size_t size)
{
    unsigned char *bytes_val = (unsigned char *)val;
    unsigned char *bytes_dest = (unsigned char *)dest;

    while (size) {
        bytes_dest[size] = bytes_val[size];
        size--;
    }
    return (dest);
}