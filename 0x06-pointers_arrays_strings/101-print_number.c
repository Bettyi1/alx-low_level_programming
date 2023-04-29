#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_number - function prints an integer
 * @n: interger input
 * Return: 0
 */
void print_number(int n)
{
	unsigned int j;
	j = n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;/*checks if integer is -ve */
	}
	/* negative int to positive*/
	if (j / 10 != 0)
	{
		print_number(j / 10); /* diviides eery int by 10 to make it positive*/
	}
	_putchar((j % 10) + '0');/* converst to ASCII character representation*/
}
