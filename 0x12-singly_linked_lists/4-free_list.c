#include <stdlib.h>

#include "lists.h"

/**
 * free_list - trash the linked list
 *
 * @head: list_t list to be trached
 *
 */


void free_list(list_t *head)
{

	list_t *trns;

	while (head)
	{

		trns = head->next;

		free(head->str);
		free(head);

		head = trns;

	}
}
