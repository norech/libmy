/*
** EPITECH PROJECT, 2020
** my_str_startswith
** File description:
** Check if starts with
*/
#include <my.h>
#include <stdbool.h>

bool my_str_startswith(char const *haystack, char const *needle)
{
    while (*needle != '\0' && *haystack == *needle) {
        haystack++;
        needle++;
    }
    return (*needle == '\0');
}
