#include "main.h"
/**
 * _memset - functio fills memory with constant byte
 * @b: final value
 * @s: starting address
 * @n: numbers to be changed
 * Return: changed array with number of n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0 ; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
