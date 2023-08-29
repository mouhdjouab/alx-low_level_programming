#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node in a linked list at some index
 *
 * @head: pointer to the first node
 *
 * @idx: index of node where added
 *
 * @n: data to insert
 *
 * Return: pointer to the new node, or NULL
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *newnode;
	listint_t *temp = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode || !head)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (k = 0; temp && k < idx; k++)
	{
		if (k == idx - 1)
		{
			newnode->next = temp->next;
			temp->next = newnode;
			return (newnode);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
