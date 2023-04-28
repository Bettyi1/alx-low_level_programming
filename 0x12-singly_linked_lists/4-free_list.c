#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - function frees a linked list
 * @head: input value
 */

void free_list(list_t *head)
{
	list_t *ap;

	while (head)
	{
		ap = head->next;
		 free(head->str);
		 free(head);
		 head = ap;
	}
}
