#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: pointer
 * @index: index*
 * Return: 1, or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int k;
	listint_t *ap = *head;
	listint_t *new_n;

	new_n = NULL;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
			return (1);
	}
	while (k < index - 1)
	{
		if (!ap || !(ap->next))
			return (-1);
		ap = ap->next;
		k++;
	}
	new_n = ap->next;
	ap->next = new_n->next;
	free(new_n);

	return (1);
}
