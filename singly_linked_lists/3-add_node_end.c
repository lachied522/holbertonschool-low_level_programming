#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds node to end of linked list
 * @head: head of linked list
 * @str: value of node to be added
 * Return: address of head node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *s;
	int i = 0;
	unsigned int len = 0;
	list_t *node;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;
	s = malloc(len);
	if (s == NULL)
	{
		free(s);
		free(new);
		return (NULL);
	}

	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}

	new->str = s;
	new->len = i;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	node = *head;
	while (node->next != NULL)
		node = node->next;

	node->next = new;
	return (*head);
}
