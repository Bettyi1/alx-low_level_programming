#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * list_len - function returns linked elements
 * @h: pointer to list
 * Return: number of elements in a list
 */

size_t list_len(const list_t *h)
{
	size_t j = 0;
	const list_t *curlis = h;

	while (curlis)
	{
		j++;
		curlis = curlis->next;
	}
	return (j);
}
