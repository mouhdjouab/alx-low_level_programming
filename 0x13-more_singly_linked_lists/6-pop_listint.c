#include "lists.h"

/**
 * pop_listint - deletes the head of a linked list
 *
 * @head: pointer to the first element
 *
 * Return: the data inside the elements that was deleted or 0
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *tempr;
	int node;

	if (!head || !*head)
		return (0);

	node = (*head)->n;
	tempr = (*head)->next;
	free(*head);
	*head = tempr;

	return (node);
}
