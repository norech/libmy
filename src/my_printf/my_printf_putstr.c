/*
** EPITECH PROJECT, 2020
** my_void_putstr
** File description:
** Source code
*/
#include <my.h>
#include <my_printf_utils.h>
#include <stdarg.h>

int my_printf_putstr(va_list *ap, printf_flag_parameters_t params)
{
    char *value;

    if (params.precision != -1)
        return (-2);
    value = va_arg(*ap, char *);
    return (my_putstr(value));
}