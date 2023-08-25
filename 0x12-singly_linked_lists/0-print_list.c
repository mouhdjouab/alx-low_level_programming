#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all DATA related to linked list
 * @h: Pointer to list_t
 * Return: Node Number
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		x++;
	}

	return (x);
}
