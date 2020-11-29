/*
** EPITECH PROJECT, 2020
** my_reverse_node
** File description:
** Source code
*/
#include <my_linked_list.h>
#include <defmy.h>

void my_reverse_node(linked_list_t **head)
{
    linked_list_t *current = *head;
    linked_list_t *prev = NULL;
    linked_list_t *next;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}