#include "main.h"

/**
 * _strlen_recursion - function prints size
 * @s: string input
 * Return: size
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * pal_checker -  main  function
 * @b: input value
 * @s: string
 * @a: index
 * Return: 1, or 0
 */
int pal_checker(char *s, int a, int b)
{
	if (s[a] == s[b])
		if (a > b / 2)
			return (1);
		else
			return (pal_checker(s, a + 1, b - 1));
	else
		return (0);
}

/**
 * is_palindrome - function input
 * @s: string
 * Return: 1 if for palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int x = _strlen_recursion(s);

	return (pal_checker(s, 0, x - 1));
}
