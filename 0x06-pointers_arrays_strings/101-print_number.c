#include "main.h"

/**
 * print_number - function prints an integer
 * @n: interger input
 * Return: 0
 */
void print_number(int n)
{
	unsigned int j;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
		/*checks if integer is -ve */
	}
	/* negative int to positive*/
	j = n;

	if (j / 10)
	{
		print_number(j / 10);
		/* diviides eery int by 10 to make it positive*/
	}
	_putchar(j % 10 + '0');
	/* converst to ASCII character representation*/
}
