/*
** EPITECH PROJECT, 2020
** my_count_nodes
** File description:
** Source code
*/
#include <my_linked_list.h>
#include <defmy.h>
#include <my.h>

int my_count_nodes(linked_list_t **head)
{
    int i = 0;
    linked_list_t *current;

    FOREACH_NODE(*head, current)
        i++;
    return (i);
}
