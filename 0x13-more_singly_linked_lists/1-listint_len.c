#include "lists.h"

/**
 * listint_len - returns linked list elements
 * @h: type input
 *
 * Return: no of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count_el = 0;

	while (h)
	{
		count_el++;
		h = h->next;
	}
	return (count_el);
}
