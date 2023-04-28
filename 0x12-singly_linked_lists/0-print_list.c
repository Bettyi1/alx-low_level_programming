#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - function prints header file
 * @h: pointer of the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count =  0;

	while (h) /*loop until end of list otherwise h becomes NULL */
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
