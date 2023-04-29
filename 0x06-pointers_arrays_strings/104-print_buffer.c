#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function  prints buffer
 * @size: size
 * @b: buffer
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int a = 0;
	int key;
	int x, c;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	while (a < size)
	{
		key = size - a < 10 ? size - a : 10;
		printf("%08x: ", a);

		for (x = 0; x < 10; x++)
		{
			if (x < key)
				printf("%02x", *(x + a + b));
			else
				printf("  ");
			if (x % 2)
			{
				printf(" ");
			}
		}
		for (x = 0; x < key; x++)
		{
			c = *(b + a + x);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		a += 10;
	}
}
