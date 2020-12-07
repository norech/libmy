/*
** EPITECH PROJECT, 2020
** my_put_nbr
** File description:
** Puts a number
*/
#include <my.h>

int my_put_nbr_base(long long nb, int radix)
{
    char str[my_longlonglen(nb, radix)];

    my_itoa(str, nb, radix);
    my_putstr(str);
    return (0);
}
