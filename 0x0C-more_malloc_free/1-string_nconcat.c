#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - function concatenates two strings
 * @s1: dest string
 * @s2: string to concatenate from
 * @n: number of bytes to be concatenated
 * Return: pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int k = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1] != '\0')
		len1++;
	while (s2 && s2[len2] != '\0')
		len2++;

	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);

	while (k < len1)
	{
		s[k] = s1[i];
		k++;
	}

	while (n < len2 && i < (len1 + n))
		s[k++] = s2[j++];

	while (n >= len2 && k < (len1 + len2))
		s[k++] = s2[j++];

	s[i] = '\0';

	return (s);
}