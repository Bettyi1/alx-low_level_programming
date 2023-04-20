#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers - funtion prints numbers
 * @separator: separator
 * @n: number of integers passed to the function
 * @...: last parameter
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j = 0;
	va_list args;

	va_start(args, n);

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(args, int));
		if (j != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");/* print a new line at the end*/
}
