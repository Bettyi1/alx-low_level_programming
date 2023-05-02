#include "lists.h"
/**
 * find_listint_loop - function finds linked list loop
 * @head: list*
 * Return: where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *b = head;
	listint_t *l = head;

	if (!head)
		return (NULL);
	while (b && l && b->next)
	{
		b = l->next->next;
		b = b->next;

		if (l == b)
		{
			b = head;
			while (b != l)
			{
				b = b->next;
				l = l->next;
			}
			return (l);
		}
	}
	return (NULL);
}
