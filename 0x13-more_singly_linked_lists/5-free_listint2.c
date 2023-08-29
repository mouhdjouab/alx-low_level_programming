#include "lists.h"

/**
 * free_listint2 - free a linked list
 *
 * @head: pointer to the listint_t
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *tempr;

	if (head == NULL)
		return;

	while (*head)
	{
		tempr = (*head)->next;
		free(*head);
		*head = tempr;
	}

	*head = NULL;

}
