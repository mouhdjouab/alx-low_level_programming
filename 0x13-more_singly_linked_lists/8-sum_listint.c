#include "lists.h"

/**
 * sum_listint - the sum of all the data in liked list
 *
 * @head: first node
 *
 * Return: returning sum
 *
 */
int sum_listint(listint_t *head)
{
	int sum_data = 0;
	listint_t *ltemp = head;

	while (ltemp)
	{
		sum_data += ltemp->n;
		ltemp = ltemp->next;
	}

	return (sum_data);
}
