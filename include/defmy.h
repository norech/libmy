/*
** EPITECH PROJECT, 2020
** defmy
** File description:
** Some useful definitions for mylib
*/

#include <stdlib.h>

#ifndef DEFMY_H_
#define DEFMY_H_

void my_array_print_floatarr(float *arr, ssize_t size);
void my_array_print_strarr(char **arr, ssize_t size);
void my_array_print_nbarr(size_t element_size, char* format, void *arr,
    ssize_t size);
void my_array_print_u_nbarr(unsigned long long *arr, ssize_t size);
int my_printf(char *s, ...);
char *my_strjoin(char **arr, char *delimiter);

#define FOREACH(array, index) \
    for (int index = 0; (size_t)array[index] != 0; index++)

#define FOREACH_PAIR(array, index, value) \
    for (int index = 0; (size_t)(value = array[index]) != 0; index++)

#define FOREACH_NODE(head, current) \
    for (__typeof__(head) current = head; current != NULL; \
            current = (current != NULL ? current->next : NULL))

#define ITERATE(array) \
    for (; (size_t)(*array) != 0; array++)

#define UNUSED(x) \
    x = x

#define GET_12TH_ARG(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, ...) a12

#define ARGS_COUNT(...) \
    GET_12TH_ARG(0, ## __VA_ARGS__, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0)

#define CONCAT(...) \
    my_strjoin((char *[]){ "", ## __VA_ARGS__, NULL }, "")

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


#define GET_ARG_OR_DEFAULT(dummy, arg, ...) arg

#define DEBUG_PRINT_ARRAY(x, ...) \
    Z__DEBUG__PRINT_ARRAY_SIZED(x, GET_ARG_OR_DEFAULT(0, ## __VA_ARGS__, -1))

#define Z__DEBUG__PRINT_ARRAY_SIZED(x, size) \
    _Generic((x), \
        char **: my_array_print_strarr((void *)(x), size), \
        char const **: my_array_print_strarr((void *)(x), size), \
        char *: my_array_print_nbarr(sizeof(char), "%hhd", (x), size), \
        short *: my_array_print_nbarr(sizeof(short), "%hd", (x), size),\
        int *: my_array_print_nbarr(sizeof(int), "%d", (x), size), \
        long *: my_array_print_nbarr(sizeof(long), "%ld", (x), size), \
        long long *: my_array_print_nbarr(sizeof(long long), "%lld", \
            (x), size), \
        unsigned char *: my_array_print_nbarr(sizeof(char), "%hhu", (x), size),\
        unsigned short *: my_array_print_nbarr(sizeof(short), "%hu", (x), \
            size), \
        unsigned int *: my_array_print_nbarr(sizeof(int), "%u", (x), size), \
        unsigned long *: my_array_print_nbarr(sizeof(long), "%lu", (x), size), \
        unsigned long long *: my_array_print_nbarr(sizeof(short), "%llu", (x), \
            size), \
        float *: my_array_print_floatarr((void *)(x), size), \
        double *: my_array_print_floatarr((void *)(x), size), \
        default: my_printf("unsupported") \
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
