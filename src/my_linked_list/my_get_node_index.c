/*
** EPITECH PROJECT, 2020
** my_get_node_index
** File description:
** Source code
*/
#include <my_linked_list.h>
#include <defmy.h>

int my_get_node_index(linked_list_t **head, linked_list_t *element)
{
    int i = 0;
    linked_list_t *current;

    FOREACH_NODE(*head, current) {
        if (current == element)
            break;
        i++;
    }
    return (i);
}