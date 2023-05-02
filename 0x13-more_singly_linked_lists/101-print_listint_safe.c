#include <stdio.h>
#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - functions Counts unique nodes
 * @head: pointer
 * Return: number of unique nodes, 0
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *jan, *feb;
	size_t newd = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	jan = head->next;
	feb = (head->next)->next;
	while (feb)
	{
		if (jan == feb)
		{
			jan = head;
			while (jan != feb)
			{
				jan = jan->next;
				newd++;
				jan = jan->next;
				feb = feb->next;
			}
			jan = jan->next;
			while (jan != feb)
			{
				newd++;
				jan = jan->next;
			}
			return (newd);
		}
		jan = jan->next;
		feb = (feb->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - prints linked list
 * @head: pointer
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t newd;
	size_t adrs = 0;

	newd = looped_listint_len(head);
	if (newd == 0)
	{
		for (; head != NULL; newd++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (adrs = 0 ; adrs < newd ; adrs++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (newd);
}
