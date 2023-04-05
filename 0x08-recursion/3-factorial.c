#include "main.h"
/**
 * factorial - function returns factorial
 * @n:input value
 * Return: n factorial
 */
int factorial(int n)
{
	if (n < 0)
	return (-1);
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
