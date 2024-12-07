#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - sums values of all nodes in dlist
 * @head: head of doubly linked list
 * Return: sum of values
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	int sum = 0;

	if (head == NULL)
		return (0);

	node = head;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
