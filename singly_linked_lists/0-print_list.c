#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints values of linked list
 * @h: head of linked list
 * Return: number of elements in linked list
 */
size_t print_list(const list_t *h)
{
	list_t node;
	size_t n;

	node = *h;
	n = 0;
	while (1 == 1)
	{
		if (node.str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", node.len, node.str);
		}

		n++;

		if (node.next == NULL)
			break;

		node = *node.next;
	}

	return (n);	
}
