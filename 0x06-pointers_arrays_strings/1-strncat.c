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
	int destlength = 0;
	int srclength = 0;
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destlength++;
	for (i = 0 ; src[i] != '\0' ; i++)
		srclength++;
	for (i = 0 ; i < n ; i++)
		dest[destlength + i] = src[i];
			return (dest);
}
