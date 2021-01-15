/*
** EPITECH PROJECT, 2021
** string_indexof
** File description:
** Source code
*/

#include <my/string.h>
#include <my/str.h>
#include <my/types.h>

isize_t my_string_indexof(string_t const *self, string_t const *str)
{
    strpos_t pos = my_strstr(self->as_str, str->as_str);

    return (pos - self->as_str);
}