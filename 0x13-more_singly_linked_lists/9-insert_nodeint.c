#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new nod
 * @head: first node pointer
 * @n: input type
 * @idx: index
 * Return: new node pointer, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k = 0;
	listint_t *x;
	listint_t *node = malloc(sizeof(listint_t));

	if (head == NULL || !node)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (!idx)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	x = *head;
	while (x)
	{
		if (k == idx - 1)
		{
			node->next = x->next;
			x->next = node;
			return (node);
		}
		k++;
		x = x->next;
	}
	free(node);
	return (NULL);
}
