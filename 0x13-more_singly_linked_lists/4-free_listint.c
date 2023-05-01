#include "lists.h"
/**
 * free_listint - function frees a linked list
 * @head: list input
 */

void free_listint(listint_t *head)
{
	listint_t *new;

	while (head)
	{
		new = head->next;
		free(head);
		head = new;
	}
}
