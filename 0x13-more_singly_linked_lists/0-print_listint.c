#include "lists.h"

/**
 * print_listint - Prints all nodes element
 * @h: linked list to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n_elem = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n_elem++;
		h = h->next;
	}

	return (n_elem);
}
