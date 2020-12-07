/*
** EPITECH PROJECT, 2020
** my_remove_node
** File description:
** Source code
*/
#include <my_linked_list.h>
#include <defmy.h>
#include <stdlib.h>

void my_detach_node(void **head, void *element_ptr)
{
    linked_list_t *element = element_ptr;
    linked_list_t *current = *head;

    if (*head == NULL)
        return;
    if (element == *head) {
        *head = element->next;
    } else {
        FOREACH_NODE(*head, current) {
            if (current->next != element)
                continue;
            current->next = element->next;
            break;
        }
    }
}