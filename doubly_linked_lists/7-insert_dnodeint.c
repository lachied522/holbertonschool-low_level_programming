#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - adds node to dlist at index
 * @h: pointer to head of doubly linked list
 * @idx: index for node to be inserted
 * @n: value of node to be added
 * Return: pointer to head of new linked list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *node;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*h == NULL)
	{
		if (idx > 0)
			return (NULL);

		*h = new;
		new->prev = NULL;
		new->next = NULL;
	}
	else
	{
		node = *h;
		while (i < idx - 1)
		{
			if (node == NULL)
				return (NULL);

			node = node->next;
			i++;
		}

		new->prev = node;
		new->next = node->next;
		node->next->prev = new;
		node->next = new;
	}

	return (*h);
}
