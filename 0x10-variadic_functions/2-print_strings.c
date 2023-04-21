#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/*
 * print_strings- prints strings
 * @n: number of arguments
 * @separator: separator
 * @...:last parameter
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int k;
	char *str;
	va_list string;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(string, n);

	for (k = 0 ; k < n ; k++)
	{
		str = va_arg(string, char *);

		if (str == NULL)
		{
			printf("nil");
			break;
		}
		printf("%s", str);
		if (n == k + 1)
		{
			break;
		}
		printf("%s", separator);
	}
	va_end(string);
	printf("\n");
}
