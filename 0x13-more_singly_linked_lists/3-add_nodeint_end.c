#include "lists.h"
/**
 * add_nodeint_end - function adds node to linked list
 * @head: pointer
 * @n: new element input
 * Return: new element pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node1;
	listint_t *ap = *head;

	node1 = malloc(sizeof(listint_t));

	if (node1 == NULL)
	{
		return (NULL);
	}
	node1->n = n;
	node1->next = NULL;

	if (*head == NULL)
	{
		*head = node1;
		return (node1);
	}
	while (ap->next)
		ap = ap->next;
			ap->next = node1;
	return (node1);
}

