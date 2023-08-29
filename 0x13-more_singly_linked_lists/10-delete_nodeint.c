#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 *
 * @head: pointer to the first element
 *
 * @index: index of the node to delete
 *
 * Return: 1 or -1
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *actual = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (j < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		j++;
	}


	actual = temp->next;
	temp->next = actual->next;
	free(actual);

	return (1);
}
