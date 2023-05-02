#include "lists.h"
/**
 * find_listint_loop - function finds linked list loop
 * @head: list*
 * Return: where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *b = NULL;
	listint_t *l = NULL;

	b = head;
	l = head;

	if (head == NULL)
		return (NULL);
	while (b && l && l->next)
	{
		b = b->next;
		l = l->next->next;
		if (b == l)
		{
			while (1)
			{
				l = b;
				while (l->next != b && l->next != head)
					l = l->next;
				if (l->next == head)
					break;
				head = head->next;
			}
			return (head);
		}
	}
	return (NULL);
}
