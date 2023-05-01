#include "lists.h"
/**
 * sum_listint - function returns sum of all the data
 * @head: linked list node
 * Return: if empty return 0
 */
int sum_listint(listint_t *head)
{
	int i;

	listint_t *ap = head;

	i = 0;
	while (ap)
	{
		i += ap->n;
		ap = ap->next;
	}
	return (i);
}
