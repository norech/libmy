/*
** EPITECH PROJECT, 2021
** string_equals
** File description:
** Source code
*/

#include <my/string.h>
#include <my/str.h>

bool my_string_compare(string_t *s1, string_t *s2)
{
    return (my_strcmp(s1->as_str, s2->as_str));
}