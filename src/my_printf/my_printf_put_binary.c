/*
** EPITECH PROJECT, 2020
** my_void_putstr
** File description:
** Source code
*/
#include <my.h>
#include <my_printf_utils.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int my_printf_put_binary(va_list *ap, printf_flag_parameters_t params)
{
    int value = va_arg(*ap, int);
    char output[my_intlen(value, 2)];
    int len = 0;

    if (params.precision != -1)
        return (-2);
    my_itoa(output, value, 2);
    len += my_putstr(output);
    return (len);
}