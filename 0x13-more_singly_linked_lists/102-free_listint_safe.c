#include "lists.h"
/**
 * free_listint_safe - function frees linked list
 * @h: pointer
 * Return: size of list freed
 */

size_t free_listint_safe(listint_t **h)
{
	int x;
	size_t len = 0;
	listint_t *ap;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		x = *h - (*h)->next;

		if (x > 0)
		{
			ap = (*h)->next;
			free(*h);
			*h = ap;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
