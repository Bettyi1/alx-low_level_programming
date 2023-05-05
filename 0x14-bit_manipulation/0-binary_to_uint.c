#include "main.h"
/**
 * binary_to_uint - function converts number to int
 * @b: input value
 * Return: converted number, 0
 */

unsigned int binary_to_uint(const char *b)
{
	int x = 0;
	unsigned int n = 0;

	if (!b)
		return (0);

	for (; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		n = 2 * n + (b[x] - '0');
	}
	return (n);
}

