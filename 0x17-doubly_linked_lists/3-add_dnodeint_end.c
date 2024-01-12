#include "lists.h"
/**
 * add_dnodeint_end - function adds node to list end
 * @head: pointer
 * @n: interger
 *
 * Return: NULL if it fails, else pointer
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current_node;

	new = malloc(sizeof(dlistint_t));
	current_node = *head;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (current_node != NULL)
	{
		while (current_node->next)
			current_node = current_node->next;
		current_node->next = new;
	}
else
	*head = new;
new->prev = current_node;

	return (new);
}
