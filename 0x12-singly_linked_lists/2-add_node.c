#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list
 * @head: Pointer to a pointer to the head of the list
 * @str: String to be stored in the new node
 * Return: Address of the new node, or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
    if (!str)
        return NULL;

    size_t len = 0;
    while (str[len])
        len++;

    list_t *new_node = malloc(sizeof(list_t));

    if (!new_node)
        return NULL;

    new_node->str = strdup(str);
    if (!new_node->str)
    {
        free(new_node);
        return NULL;
    }

    new_node->len = len;
    new_node->next = *head;
    *head = new_node;

    return new_node;
}
