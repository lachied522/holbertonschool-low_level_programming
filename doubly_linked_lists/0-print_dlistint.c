#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints values of doubly linked list
 * @h: head of doubly linked list
 * Return: number of elements in linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t node;
	size_t n;

	if (h == NULL)
		return (0);

	node = *h;
	n = 0;
	while (1 == 1)
	{
		printf("%d\n", node.n);

		n++;
		if (node.next == NULL)
			break;

		node = *node.next;
	}

	return (n);
}
