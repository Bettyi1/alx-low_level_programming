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
	if (n < 0)
	{
		_putchar('-');
		n = -n;/*checks if integer is -ve */
	}
	/* negative int to positive*/
	if (n / 10 != 0)
	{
		print_number(n / 10); /* diviides eery int by 10 to make it positive*/
	}
	_putchar((n % 10) + '0');/* converst to ASCII character representation*/
}
