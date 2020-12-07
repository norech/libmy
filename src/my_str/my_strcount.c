/*
** EPITECH PROJECT, 2020
** my_strcount
** File description:
** Count
*/
#include <my.h>
#include <stdarg.h>

int my_strcount(char const *haystack, char const *needle)
{
    int count = 0;
    int i = 0;
    while (*haystack != '\0') {
        if (needle[i] == '\0') {
            count++;
            i = 0;
        }
        if (*haystack != needle[i]) {
            i = 0;
        } else {
            i++;
        }
        haystack++;
    }
    if (needle[i] == '\0')
        count++;
    return (count);
}
