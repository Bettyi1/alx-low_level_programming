#include "lists.h"

/**
 * add_nodeint - func adds new node to list  beginning
 * @head: Pointer
 * @n: Integer
 *
 * Return: address or NULl
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}