#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node
 *
 * @index: index of node
 *
 * Return: pointer to the node or NULL
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int indx = 0;
	listint_t *Ltemp = head;

	while (Ltemp && indx < index)
	{
		Ltemp = Ltemp->next;
		indx++;
	}

	return (Ltemp ? Ltemp : NULL);
}
