/*
** EPITECH PROJECT, 2020
** my_unshift_node
** File description:
** Source code
*/
#include <my_linked_list.h>

void my_unshift_node(linked_list_t **head, linked_list_t *element)
{
    element->next = *head;
    *head = element;
}