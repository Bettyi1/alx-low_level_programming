#include "main.h"
/**
 * _strlen_recursion - function returns length of string
 * @s: input value
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s > 0 && *s != '\0')
	{
		len++;
		 len += _strlen_recursion(s + 1);
	}
	return (len);
}
