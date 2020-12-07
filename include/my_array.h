/*
** EPITECH PROJECT, 2020
** my_array
** File description:
** Source code
*/
#include <unistd.h>

#ifndef MY_ARRAY_H
#define MY_ARRAY_H

#define ARRAY_FIND_ONE_IN(arr, cmp, value) \
    my_array_find_one(sizeof(arr[0]), arr, &cmp, (void *)(value))

#define ARRAY_FIND_ALL_IN(arr, cmp, value) \
    my_array_find_all(sizeof(arr[0]), arr, &cmp, (void *)(value))

#define ARRAY_COUNT(arr) \
    my_array_count(sizeof(arr[0]), arr)

#define ARRAY_MERGE(arr1, ...) \
    my_array_merge(sizeof(arr1[0]), (void *[]) { arr1, ## __VA_ARGS__, NULL })

int my_array_count(size_t element_size, void *array);

void *my_array_merge(size_t element_size, void **elements);

void *my_arraydup(size_t element_size, void *array);

void *my_array_find_one(size_t element_size, void *array,
    bool (*cmp)(size_t element_size, void *element, void *param), void *param);

void **my_array_find_all(size_t element_size, void *array,
    bool (*cmp)(size_t element_size, void *element, void *param), void *param);

bool with_value(size_t element_size, void *element, void *ref);

#endif //MY_ARRAY_H