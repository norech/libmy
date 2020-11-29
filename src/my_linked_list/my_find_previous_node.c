/*
** EPITECH PROJECT, 2020
** my_find_previous_node
** File description:
** Source code
*/
#include <my_linked_list.h>
#include <defmy.h>

linked_list_t *my_find_previous_node(linked_list_t **head,
    linked_list_t *element)
{
    linked_list_t *current = *head;
    linked_list_t *prev = NULL;

    FOREACH_NODE(*head, current) {
        if (current == element)
            break;
        prev = current;
    }
    return (prev);
}