/*
** EPITECH PROJECT, 2020
** my_str_endswith
** File description:
** Check if ends with
*/
#include <my.h>
#include <stdbool.h>

bool my_str_endswith(char const *haystack, char const *needle)
{
    int i = my_strlen(haystack);
    int j = my_strlen(needle);

    while (j != 0 || i != 0) {
        if (i == 0 || haystack[i] != needle[j])
            return (false);
        if (j == 0)
            return (true);
        i--;
        j--;
    }
    return (j == 0);
}
