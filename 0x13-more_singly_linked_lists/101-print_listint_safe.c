#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - prints linked list
 * @head: pointer
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ap = head;
	const listint_t *st = head;

	while (ap != NULL && st != NULL && st->next != NULL)
	{
		printf("[%p] %d\n", (void *)ap, ap->n);
		ap = ap->next;
		st = st->next->next;
		if (ap == st)
		{
			printf("[%p] %d\n", (void *)ap, ap->n);
		}
	}
	if (ap == NULL || st == NULL || st->next == NULL)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		return (0);
	}
	else
	{
		size_t t = 0;

		do {
			t++;
			printf("[%p] %d\n", (void *)ap, ap->n);
			ap = ap->next;
		} while (ap != st);
		printf("-> [%p] %d\n", (void *)ap, ap->n);
		do {
			t++;
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		} while (head != ap);
		printf("print loop [%p] %d\n", (void *)ap, ap->n);
		return (t);
	}
}
