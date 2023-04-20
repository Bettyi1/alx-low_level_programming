#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/*
 * print_strings- prints strings
 * @:number of strings
 * @separator: separator
 * @...:last parameter
 *
 * Description: nil of string is NULL
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int k = 0;
	char *str;
	va_list strings;

	va_start(strings, n);

	for (k = 0 ; k < n ; k++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);
	}
	if (separator != NULL && k != n - 1)
	{
		printf("%s", separator);
	}
	va_end(strings);
	printf("\n");
}
