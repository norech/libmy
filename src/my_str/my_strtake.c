/*
** EPITECH PROJECT, 2020
** my_strtake
** File description:
** Deletes position out of a string
*/
#include <my.h>

char *my_strtake(char *str, int index, int count)
{
    int len = my_strlen(str);
    char copy[len + 1];
    int i = 0;
    int j = 0;

    if (index < 0)
        index = len + index;
    my_strcpy(copy, str);
    my_bzero(str, len + 1);
    while (copy[i] != '\0') {
        if (i >= index && i <= index + count) {
            str[j] = copy[i];
            j++;
        }
        i++;
    }
    return (str);
}