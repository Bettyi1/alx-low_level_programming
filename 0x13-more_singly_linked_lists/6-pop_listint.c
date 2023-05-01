#include "lists.h"
/**
 * pop_listint - deletes linked list node
 * @head: pointer
 * Return:0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int del;
	listint_t *h_node;

	if (!head || !*head)
	{
		return (0);
	}

	del = (*head)->n;
	h_node = (*head)->next;
	free(*head);
	*head = h_node;

	return (del);
}

