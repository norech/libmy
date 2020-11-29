/*
** EPITECH PROJECT, 2020
** mylinkedlist
** File description:
** Source code
*/

#ifndef MY_LINKED_LIST_H
#define MY_LINKED_LIST_H

typedef struct linked_list {
    struct linked_list *next;
} linked_list_t;

#define LISTHEAD(x) ((linked_list_t **)&x)
#define LISTNODE(x) ((linked_list_t *)x)

int my_count_nodes(linked_list_t **head);

linked_list_t *my_find_previous_node(linked_list_t **head,
    linked_list_t *element);

linked_list_t *my_get_last_node(linked_list_t **head);

int my_get_node_index(linked_list_t **head, linked_list_t *element);

void my_insert_node(linked_list_t **head, int index, linked_list_t *element);

void my_pop_node(linked_list_t **head);

void my_push_node(linked_list_t **head, linked_list_t *element);

void my_remove_node(linked_list_t **head, linked_list_t *element);

void my_reverse_node(linked_list_t **head);

void my_shift_node(linked_list_t **head);

void my_swap_node_and_next(linked_list_t **head, linked_list_t *a);

void my_unshift_node(linked_list_t **head, linked_list_t *element);

#endif //MY_LINKED_LIST_H