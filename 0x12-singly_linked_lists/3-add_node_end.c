#include <stdlib.h>

#include <string.h>

#include "lists.h"

/**
 * add_node_end - adds node at the end
 *
 * @head: pointer to list_t
 *
 * @str: string
 *
 * Return: address Node Added
 */
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *NodNew;

	list_t *trans = *head;

	unsigned int len = 0;

	while (str[len])
		len++;

	NodNew = malloc(sizeof(list_t));

	if (!NodNew)

		return (NULL);

	NodNew->str = strdup(str);
	NodNew->len = len;
	NodNew->next = NULL;

	if (*head == NULL)
	{
		*head = NodNew;

		return (NodNew);
	}

	while (trans->next)
		trans = trans->next;

	trans->next = NodNew;

	return (NodNew);
}
