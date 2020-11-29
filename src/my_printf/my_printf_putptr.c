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

int my_printf_putptr(va_list *ap, printf_flag_parameters_t params)
{
    void *value = va_arg(*ap, void *);
    char output[my_longlen((unsigned long)value, 16) + 3];
    int len = 0;

    if (params.precision != -1)
        return (-2);
    if (value == NULL) {
        len += my_putstr("(nil)");
        return (len);
    }
    len += my_putstr("0x");
    my_ultoa(output, (unsigned long)value, 16);
    my_strlowcase(output);
    len += my_putstr(output);
    return (len);
}