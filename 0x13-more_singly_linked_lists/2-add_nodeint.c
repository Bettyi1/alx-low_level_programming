#include "lists.h"
/**
 * add_nodeint - function adds  new node
 * @head: first node pointer
 * @n: input value
 * Return:new element address, NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node1;

	node1 = malloc(sizeof(listint_t));

	if (!node1)
	{
		return (NULL);
	}
	node1->n = n;
	node1->next = *head;
	*head = node1;

	return (node1);
}
