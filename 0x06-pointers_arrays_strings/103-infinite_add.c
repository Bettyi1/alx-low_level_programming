#include <stdio.h>
#include "main.h"
/**
 * *infinite_add - function adds wtwo numbers
 * @n1: input values
 * @r: buffer to function
 * @n2: input value
 * @size_r: buffer
 *
 * Return: address  pointer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int b, c, d, e, m, n = 0;

	for (b = 0 ; n1[b] ; b++)
		;
	for (c = 0 ; n2[c] ; c++)
		;
	if (b > size_r)
	{
		return (0);
	}
	else if (c > size_r)
		return (0);
	m = 0;
	for (b -= 1 ; c -= 1, d = 0 ; b--, c--, d++)
	{
		n = m;
		if (b >= 0)
			n += n1[b] - '0';
		if (c >= 0)
			n += n2[c] - '0';
		if (b < 0 && c < 0 && n == 0)
		{
		break;
		}

		m = n / 10;
		r[d] = n % 10 + '0';
	}
	r[d] = '0';
	if (b >= 0 || c >= 0 || m)
		return (0);
	for (d -= 1, e = 0 ; e < d ; d --, e++)
	{
		m = r[d];
		r[d] = r[e];
		r[e] = m;
	}
	return (r);
}



