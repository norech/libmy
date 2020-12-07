/*
** EPITECH PROJECT, 2020
** my_remove_node
** File description:
** Source code
*/
#include <my_linked_list.h>
#include <defmy.h>
#include <stdlib.h>

void my_remove_node(void **head, void *element)
{
    my_detach_node(head, element);
    free(element);
}