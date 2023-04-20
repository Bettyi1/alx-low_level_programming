#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - reurns sum of all parameters
 * @n:fixed argument
 * @...:last paraeter
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int k = 0;

	va_list ptr;
	/* pointer to fixed argument*/
	va_start(ptr, n);
	for (k = 0 ; k < n ; k++)
		sum += va_arg(ptr, int);
	va_end(ptr);
	return (sum);
}
