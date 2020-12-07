/*
** EPITECH PROJECT, 2020
** my_put_float
** File description:
** Print a floating number
*/
#include <my.h>

int my_put_float(float nb, int digits)
{
    int len = 0;
    int power = my_pow(10, digits);
    int decimals = (int)((nb - (int)nb) * power);
    int zeros_count = digits - my_numlen(decimals);
    int i = 0;

    my_put_nbr((int) nb);
    if (digits > 0) {
        len += my_putchar('.');
        while (i < zeros_count) {
            len += my_put_digit(0);
            i++;
        }
        len += my_put_nbr(decimals);
    }
    return (len);
}
