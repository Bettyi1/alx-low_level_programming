#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 * @size: size of array
 * @c: input value
 * Description: create array  and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int k;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (k = 0; k < size; k++)
		str[k] = c;
	return (str);
}
