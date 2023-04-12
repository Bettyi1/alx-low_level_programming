#include <stdlib.h>
#include "main.h"
/**
 * *str_concat - function concatenates two strings
 * @s1: string to concatenate
 * @s2: string value
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int a;
	int ab;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = ab = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[ab] != '\0')
		ab++;
	conct = malloc(sizeof(char) * (a + ab + 1));

	if (conct == NULL)
		return (NULL);
	a = ab = 0;
	while (s1[a] != '\0')
	{
		conct[a] = s1[a];
		a++;
	}

	while (s2[ab] != '\0')
	{
		conct[a] = s2[ab];
		a++, ab++;
	}
	conct[a] = '\0';
	return (conct);
}
