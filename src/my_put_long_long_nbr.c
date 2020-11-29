/*
** EPITECH PROJECT, 2020
** my_put_nbr
** File description:
** Puts a number
*/
#include <my.h>

int my_put_long_long_nbr(long long nb)
{
    int len = 0;

    if (nb < 0LL) {
        len += my_putchar('-');
        nb *= -1;
    }
    if (nb >= 10LL)
        len += my_put_long_long_nbr(nb / 10LL);
    len += my_put_digit(nb % 10LL);
    return (len);
}
