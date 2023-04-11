#include "main.h"
/**
 * _memset - function fills memory with a specific value
 * @s: memory address to be filled
 * @b: input value
 * @n: number of values to be changed
 *
 * Return: array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;


	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

