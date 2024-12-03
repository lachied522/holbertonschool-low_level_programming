#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees linked list from memory
 * @head: head of linked list
 * Return: address of head node
 */
void free_list(list_t *head)
{
	list_t *node;

	node = head;

	while (node != NULL)
	{
		free(node->str);
		free(node);
		node = node->next;
	}
}
