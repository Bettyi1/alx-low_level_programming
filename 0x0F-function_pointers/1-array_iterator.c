#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes function given as parameter
 * @array: input value
 * @size: input value
 * @action: pointer to function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (action == NULL)
		return;
	if (array == NULL)
		return;
	for (k = 0 ; k < size ; k++)
		action(array[k]);
}
