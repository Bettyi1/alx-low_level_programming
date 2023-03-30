#include "main.h"
/**
 * _strncat - function concatenates two strings
 * @dest: dest string
 * @src: source string
 * @n: number of characters to append
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_string = 0;
	int i;

	while (dest[len_string] != '\0')
	{
		len_string++;
	}
	for (i = 0 ; i != '\0' ; i++)
	{
		dest[len_string + 1] = src[i];
	}
	dest[len_string] = '\0';
	return (dest);
}
