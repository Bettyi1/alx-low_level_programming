#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_number - function prints an integer
 * @n: interger input
 * Return: 0
 */
void print_number(int n)
{
	unsigned int k;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	k = n;

	if (k / 10)
		print_number(k / 10);
	_putchar(k % 10 + '0');
}
