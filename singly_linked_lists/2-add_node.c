#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds node to beginning of linked list
 * @head: head of linked list
 * @str: value of node to be added
 * Return: address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;

	*head = new;

	return (*head);
}
