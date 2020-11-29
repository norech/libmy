/*
** EPITECH PROJECT, 2020
** my_pop_node
** File description:
** Source code
*/
#include <my_linked_list.h>
#include <defmy.h>
#include <stdlib.h>

void my_pop_node(linked_list_t **head)
{
    linked_list_t *prev = NULL;
    linked_list_t *current = *head;

    while (current->next != NULL) {
        prev = current;
        current = current->next;
    }
    if (prev == NULL)
        *head = NULL;
    else
        prev->next = NULL;
    free(current);
}