#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds node to end of doubly linked list
 * @head: head of doubly linked list
 * @n: value of node to be added
 * Return: pointer to head of new linked list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *node;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	if (*head != NULL)
	{
		node = *head;
		while (node->next != NULL)
			node = node->next;

		node->next = new;
		new->prev = node;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}

	new->n = n;
	new->next = NULL;

	return (*head);
}
