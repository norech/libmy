/*
** EPITECH PROJECT, 2020
** my_round_float
** File description:
** Round a floating number
*/
#include <my.h>
#include <stdio.h>

float my_round_float(float nb, int digits)
{
    int power = my_compute_power_rec(10, digits + 1);
    int decimals = (int)((nb - (int)nb) * power);
    float nb_cut = (int)nb;

    if ((decimals % 10) >= 5) {
        if (digits == 0)
            nb_cut += 1.0;
        else
            decimals += 10;
    }

    return (nb_cut + ((float)decimals / power));
}
