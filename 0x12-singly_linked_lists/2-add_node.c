#include <stdlib.h>

#include <string.h>

#include "lists.h"


/**
 * add_node - Add node at the beginning of a linked list
 *
 * @head: Pointer to list_t list
 *
 * @str: new string to add in the node
 *
 * Return: address of the Node Added, or NULL
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *NodeNew;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));

	if (!NodeNew)
		return (NULL);

	NodeNew->str = strdup(str);
	NodeNew->len = len;
	NodeNew->next = (*head);
	(*head) = NodeNew;

	return (*head);

}
