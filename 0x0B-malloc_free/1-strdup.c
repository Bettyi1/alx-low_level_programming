#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - function copies string as per parameter
 * @str: string
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int k, len;

	k = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;
	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	while ((duplicate[k] = str[k]) != '\0')
		k++;
	return (duplicate);
}
