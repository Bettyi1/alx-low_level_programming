#include "lists.h"
/**
 * free_listint2 - function frees a linked list
 * @head: freeds list pointer
 * Return: heasd to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *ap;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		ap = (*head)->next;
		free(*head);
		*head = ap;
	}
	*head = NULL;
}
