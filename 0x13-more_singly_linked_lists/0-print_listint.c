#include "lists.h"
/**
 * print_listint - function prints linked list elements
 * @h: type of lis
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count_el;

	count_el = 0;
	while (h)
	{
		printf("%d\n", h->n);
		count_el++;

		h = h->next;
	}
	return (count_el);
}
