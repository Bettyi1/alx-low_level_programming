#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_number - function prints an integer
 * @n: interger input
 * Return:Always 0
 */
void print_number(int n)
{
	unsigned int q;

	q = n;

	if (n < 0)
	{
		_putchar('-');
		q = -n;
		/* checks if int is negative */
	}
	if (q / 10 != 0)
	{
		print_number(q / 10);
	}
}

