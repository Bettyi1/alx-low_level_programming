#include "lists.h"

/**
 * listint_len - prints elements in linked list
 * @h: head pointer in list
 * Return: counts lements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		++j;
		h = h->next;
	}
	return (j);
}
