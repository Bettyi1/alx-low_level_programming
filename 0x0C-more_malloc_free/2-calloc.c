#include <stdlib.h>
#include "main.h"

/**
 * *_memset - function allocates  memory using malloc
 * @s: memory area to copy
 * @b: input value
 * @n: number of bytes to copy
 * Return: pointer to s memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j]  = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
