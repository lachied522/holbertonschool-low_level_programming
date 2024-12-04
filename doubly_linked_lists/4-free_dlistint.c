#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees linked list from memory
 * @head: head of linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	node = head;

	while (node != NULL)
	{
		free(node);
		node = node->next;
	}
}
