#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_all - function prints anything
 * @format: format
 * Returm: anything
 */
void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);
	const char *ptr = format;
	char c;
	int i;
	float f;
	char *s;

	while (*ptr)
	{
		c = *ptr++;
		switch (c)
		{
			case 'c':
				i = va_arg(args, int);
				printf("%c", i);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = (float)va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char*);
				if (s)
				{
					printf("%s", s);
				}
				else
				{
					printf("(nil)");
				}
				break;
		}
		if (*ptr)
		{
			printf(", ");
		}
	}
	printf("\n");
	va_end(args);
}
