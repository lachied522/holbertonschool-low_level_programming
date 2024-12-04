#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds node to start of doubly linked list
 * @head: head of doubly linked list
 * @n: value of node to be added
 * Return: pointer to head of new linked list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	if (*head != NULL)
		(*head)->prev = new;

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	*head = new;

	return (*head);
}
