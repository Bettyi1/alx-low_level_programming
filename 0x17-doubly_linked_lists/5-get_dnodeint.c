#include "lists.h"
/**
 * get_dnodeint_at_index - functions returns nth node
 * @head: pointer to address
 * @index: index
 * Return: address or Null on failure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int k = 0;

	while (current != NULL && k < index)
	{
		current = current->next;
		++k;
	}
	return ((dlistint_t *)current);
}
