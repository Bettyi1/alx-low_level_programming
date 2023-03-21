#include "main.h"
/**
 * print_last_digit - funtions prints last digit
 *
 * @i: function parameter
 *
 * Return: j
 */
int print_last_digit(int i)
{
	int j;

	j = i % 10;
	if (i < 0)
		j = -j;
	_putchar(j + '0');
	return (j);
}
