#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: size
 * @cmp: pointer to a function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (cmp == NULL || array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (j = 0 ; j < size ; j++)
	{
		if (cmp(array[j]))
			return (j);
	}
	return (-1);
}
