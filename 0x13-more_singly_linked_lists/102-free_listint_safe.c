#include "lists.h"

/**
 * free_listint_safe - function frees linked list
 * @h: pointer
 *
 * Return: size of list freed
 */
size_t free_listint_safe(listint_t **h)
{
	int pad;
	size_t count = 0;
	listint_t *ap;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		pad = *h - (*h)->next;
		if (pad > 0)
		{
			ap = (*h)->next;
			free(*h);
			*h = ap;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}
	*h = NULL;
	return (count);
}
