#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all DATA related to linked list
 * @h: Pointer to list_t
 * Return: Node Number
 */
size_t print_list(const list_t *h)
{
    size_t node_count = 0;

    while (h)
    {
        if (!h->str)
        {
            printf("[0] (nil)\n");
        }
        else
        {
            size_t len = 0;
            const char *str = h->str;

            while (str[len])
                len++;

            printf("[%zu] %s\n", len, h->str);
        }

        h = h->next;
        node_count++;
    }

    return node_count;
}
