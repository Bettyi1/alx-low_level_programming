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
	int k = 0;
	char *separator = "", *s;
	va_list con;

	va_start(con, format);

	while (format && format[k])
	{
		switch (format[k])
		{
			case 'c':
				printf("%s%c", separator, va_arg(con, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(con, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(con, double));
				break;
			case 's':
				s = va_arg(con, char *);
				if (!s)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				k++;
				continue;
		}
		separator = ", ";
		k++;
	}
	printf("\n");
	va_end(con);
}
