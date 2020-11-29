/*
** EPITECH PROJECT, 2020
** defmy
** File description:
** Some useful definitions for mylib
*/
#include <stdlib.h>

#ifndef DEFMY_H_
#define DEFMY_H_

#define FOREACH(array, index) \
    for (int index = 0; (size_t)array[index] != 0; index++)

#define FOREACH_PAIR(array, index, value) \
    for (int index = 0; (size_t)(value = array[index]) != 0; index++)

#define FOREACH_NODE(head, current) \
    for (current = head; current != NULL; \
            current = (current != NULL ? current->next : NULL))

#define ITERATE(array) \
    for (; (size_t)(*array) != 0; array++)

#define UNUSED(x) \
    x = x

#endif
