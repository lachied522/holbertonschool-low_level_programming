#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns length of doubly linked list
 * @h: head of doubly linked list
 * Return: number of elements in linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t node;
	size_t n;

	if (h == NULL)
		return (0);

	node = *h;
	n = 0;
	while (1 == 1)
	{
		n++;
		if (node.next == NULL)
			break;

		node = *node.next;
	}

	return (n);
}
