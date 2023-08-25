#include <stdlib.h>

#include "lists.h"

/**
 * list_len - Returns the number of nodes in a linked list
 * @h: Pointer to list_t
 * Return: Number of nodes
 */

size_t list_len(const list_t *h)
{
    size_t node_count = 0;

    while (h)
    {
        node_count++;
        h = h->next;
    }

    return node_count;
}
