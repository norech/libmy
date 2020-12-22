/*
** EPITECH PROJECT, 2020
** defmy
** File description:
** Some useful definitions for mylib
*/

#include <stdlib.h>

#ifndef DEFMY_H_
#define DEFMY_H_

int my_printf(char *s, ...);
char *my_strjoin(char **arr, char delimiter);

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

#define GET_12TH_ARG(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, ...) a12

#define ARGS_COUNT(...) \
    GET_12TH_ARG(0, ## __VA_ARGS__, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0)

#define CONCAT(...) \
    my_strjoin((char *[]){ "", ## __VA_ARGS__, NULL }, '\0')

#define JOIN(joint, ...) \
    my_strjoin((char *[]){ "", ## __VA_ARGS__, NULL }, joint)

#define DEBUG_PRINTF(format, ...) \
    my_printf("\e[32m%s:%d :\e[36m " format "\e[0m\n", \
        __FILE__, __LINE__, ## __VA_ARGS__)

#define BITGET(byte, position) \
    ((byte & (1 << position)) >> position)

#define BITSET(byte, position, enabled) \
    (!enabled && BITGET(byte, position) == 1) \
        ? (byte = (byte ^ (1 << position))) \
        : ( \
            (enabled && BITGET(byte, position) == 0) \
                ? (byte = (byte | (1 << position))) \
                : (byte) \
        )

#define BLACK "\033[0;30m"
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define PURPLE "\033[0;35m"
#define WITHE "\033[0;37m"
#define DEF_COLOR WITHE
#endif
