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
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *node = *h;
	unsigned int i = 0;

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		(*h)->prev = new;

		return (new);
	}

	if (*h == NULL)
		return (NULL);

	while (i < idx)
	{
		if (node == NULL)
			return (NULL);
		node = node->next;
		i++;
	}

	new->next = node;
	new->prev = node->prev;
	if (node->prev != NULL)
		node->prev->next = new;
		node->prev = new;

	return (*h);
}
