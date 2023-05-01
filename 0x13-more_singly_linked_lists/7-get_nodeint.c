#include "lists.h"
/**
 * get_nodeint_at_index - function returns nth node
 * @head: first node
 * @index: index node
 * Return: NULL if node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ap = head;

	unsigned int x;

	x = 0;
	while (ap && x < index)
	{
		ap = ap->next;
		x++;
	}
	return (ap ? ap : NULL);
}

