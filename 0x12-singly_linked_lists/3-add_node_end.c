#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: pointer to the list_t list
 * @str: string input
 *
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *c_node;
	list_t *ap;
	char *nodey;

	nodey = strdup(str);
	if (!nodey)
	{
		return (NULL);
	}

	c_node = malloc(sizeof(list_t));
	if (!c_node)
	{
		free(nodey);
		return (NULL);
	}
	c_node->str = nodey;
	c_node->len = strlen(nodey);
	c_node->next = (NULL);

	if (*head)
	{
		ap = *head;
		while (ap->next)
		{
			ap = ap->next;
		}
		ap->next = c_node;
	}
	else
	{
		*head = c_node;
	}
	return (c_node);
}
