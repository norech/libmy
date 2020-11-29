/*
** EPITECH PROJECT, 2020
** my_insert_node
** File description:
** Source code
*/
#include <my_linked_list.h>
#include <defmy.h>

void my_insert_node(linked_list_t **head, int index, linked_list_t *element)
{
    linked_list_t *current;
    int i = 0;

    FOREACH_NODE(*head, current) {
        if (i == index) {
            element->next = current->next;
            current->next = element;
            break;
        }
        i++;
    }
}