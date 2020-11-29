/*
** EPITECH PROJECT, 2020
** my_get_last_node
** File description:
** Source code
*/
#include <my_linked_list.h>
#include <defmy.h>

linked_list_t *my_get_last_node(linked_list_t **head)
{
    linked_list_t *current = *head;

    while (current->next != NULL)
        current = current->next;
    return (current);
}