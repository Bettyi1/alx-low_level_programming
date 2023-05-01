#include "lists.h"
/**
 * insert_nodeint_at_index - add new node in a linked list
 * @head: first node pointer
 * @n: input type
 * @idx: index where the new node is added
 * Return: new node pointer, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x = 0;

	listint_t *node1 = malloc(sizeof(listint_t));
	listint_t *ap = *head;

	if (!node1 || !head)
		return (NULL);

	node1->n = n;
	node1->next = NULL;

	if (idx == 0)
	{
		*head = node1;
		node1->next = *head;

		return (node1);
	}

	for (; ap && x < idx; x++)
	{
		if (x == idx - 1)
		{
			node1->next = ap->next;
			ap->next = node1;
			return (node1);
		}
		else
			ap = ap->next;
	}

	return (NULL);
}
