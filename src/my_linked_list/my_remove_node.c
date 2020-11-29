/*
** EPITECH PROJECT, 2020
** my_remove_node
** File description:
** Source code
*/
#include <my_linked_list.h>
#include <defmy.h>
#include <stdlib.h>

void my_remove_node(linked_list_t **head, linked_list_t *element)
{
    linked_list_t *current = *head;

    if (element == *head) {
        *head = element->next;
        free(element);
    } else {
        FOREACH_NODE(*head, current) {
            if (current->next != element)
                continue;
            current->next = element->next;
            free(element);
            break;
        }
    }
}