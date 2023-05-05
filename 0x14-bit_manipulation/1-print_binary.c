#include "main.h"
/**
 * print_binary - function prints representtation of a no
 * @n:input value
 */

void print_binary(unsigned long int n)
{
	int x;
	int num = 0;
	unsigned long int next;

	for (x = 63 ; x >= 0 ; x--)
	{
		next = n >> x;
		if (next & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
