/*
** EPITECH PROJECT, 2020
** my_void_put_float
** File description:
** Source code
*/
#include <my.h>
#include <my_printf_utils.h>
#include <stdarg.h>

int my_printf_put_exp_upper(va_list *ap, printf_flag_parameters_t params)
{
    int len = 0;
    int exponent = 0;
    float value = va_arg(*ap, double);

    if (my_char_in(params.amplifiers, '+') && value >= 0)
        len += my_putchar('+');
    value = my_float_to_exponent(value, &exponent);
    value = my_round_float(value, 6);
    len += my_put_float(value, 6);
    len += my_putchar('E');
    if (exponent >= 0)
        len += my_putchar('+');
    if (exponent < 10)
        len += my_putchar('0');
    len += my_put_nbr(exponent);
    return (len);
}