/*
** EPITECH PROJECT, 2020
** my_shift_node
** File description:
** Source code
*/
#include <my_linked_list.h>
#include <stdlib.h>

void my_shift_node(linked_list_t **head)
{
    linked_list_t *current = *head;

    *head = current->next;
    free(current);
}