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
	char *s;
	int i;
	unsigned int len;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	s = malloc(len);

	if (s == NULL)
	{
		free(s);
		free(new);
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}

	new->str = s;
	new->len = i;
	new->next = *head;

	*head = new;

	return (*head);
}
