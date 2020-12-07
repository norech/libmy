/*
** EPITECH PROJECT, 2020
** my_array_count
** File description:
** Source code
*/
#include <defmy.h>
#include <my.h>

int my_array_count(size_t element_size, void *array)
{
    int len = 0;
    unsigned int nullbytes_count = 0;
    unsigned char *bytes = (unsigned char *)array;
    for (int i = 0; true; i++) {
        len++;
        if (bytes[i] == 0)
            nullbytes_count++;
        if (nullbytes_count == element_size) {
            break;
        }
        if (bytes[i] != 0 || i % element_size == 0)
            nullbytes_count = 0;
    }
    DEBUG_PRINTF("%d", len % element_size);
    return (len / element_size);
}