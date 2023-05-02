#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: pointer
 * @index: index
 *
 * Return: 1, or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int k;
	listint_t *ap = *head;
	listint_t *next;

	if (index != 0)
	{
		for (k = 0 ; k < index - 1 && ap != NULL ; k++)
			ap = ap->next;
	}
	if (ap == NULL || (ap->next == NULL && index != 0))
		return (-1);
	next = ap->next;
	if (index != 0)
	{
		ap->next = next->next;
		free(next);
	}
	else
	{
		free(ap);
		*head = next;
	}
	return (1);
}
