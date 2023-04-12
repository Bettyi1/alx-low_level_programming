#include <stdlib.h>
#include "main.h"

/**
 * argstostr -concatenates arguments of a program
 * @ac: input value
 * @av:  pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int a, b, k, len;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			len++;
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	k = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			str[k] = av[a][b];
			k++;
		}
		str[k] = '\n';
		k++;
	}

	return (str);
}
