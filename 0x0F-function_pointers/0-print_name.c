#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function prints a name
 * @name: input value
 * @f: pointer
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}
	if (f == NULL)
		return;
	f(name);

}
