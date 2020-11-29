/*
** EPITECH PROJECT, 2020
** my_void_put_float
** File description:
** Source code
*/
#include <my.h>
#include <my_printf_utils.h>
#include <stdarg.h>

int my_printf_put_float(va_list *ap, printf_flag_parameters_t params)
{
    int len = 0;
    float value = va_arg(*ap, double);

    if (my_char_in(params.amplifiers, '+') && value >= 0)
        len += my_putchar('+');
    if (params.precision == -1)
        return (-2);
    value = my_round_float(value, params.precision);
    len += my_put_float(value, params.precision);
    return (len);
}