#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>
/**
 * add_node - adds a new node to a list
 * @head: doublee pointer to list
 * @str: string to add new node
 * Return: address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *current;
	unsigned int length = 0;

	while (str[length])
		length++;
	current = malloc(sizeof(list_t));

	if (!current)
	{
		return (NULL);
		current->str = strdup(str);
		current->len = length;
		current->next = (*head);
		(*head) = current;
	}
	return (*head);
}
