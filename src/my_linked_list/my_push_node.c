/*
** EPITECH PROJECT, 2020
** my_push_node
** File description:
** Source code
*/
#include <my_linked_list.h>
#include <defmy.h>

void my_push_node(linked_list_t **head, linked_list_t *element)
{
    linked_list_t *current = *head;

    if (*head == NULL) {
        *head = element;
        return;
    }
    while (current->next != NULL)
        current = current->next;
    current->next = element;
}