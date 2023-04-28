#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - function frees a linked list
 * @head: input value
 */
void free_list(list_t *head)
{
	list_t *ap = head;

	while (head)
	{
		ap = head->next;
		 free(ap->str);
		 free(ap);
	}
}
