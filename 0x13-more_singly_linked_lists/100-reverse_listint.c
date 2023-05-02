#include "lists.h"

/**
 * reverse_listint - function reverses linked list
 * @head: list  pointer
 * Return: pointer to the first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *list1 = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = list1;
		list1 = *head;
		*head = next;
	}

	*head = list1;

	return (*head);
}
