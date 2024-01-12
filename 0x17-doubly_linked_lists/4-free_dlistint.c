#include "lists.h"
/**
 * free_dlistint - function frees a list
 * @head: head pointer
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *new;

	current = head;
	while (current != NULL)
	{
		new = current->next;
		free(current);
		current = new;
	}
}
