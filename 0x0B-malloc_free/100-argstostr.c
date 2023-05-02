#include <stdlib.h>
#include "main.h"

/**
 * argstostr - main function
 * @ac: input value
 * @av:  pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int a, b, k = 0, x = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0 ; a < ac ; a++)
	{
		for (b = 0 ; av[a][b] ; b++)
			x++;
	}
	x += ac;
	str = malloc(sizeof(char) * x + 1);
	if (str == NULL)
		return (NULL);
	for (a = 0 ; a < ac ; a++)
	{
		for (b = 0 ; av[a][b] ; b++)
		{
			str[k] = av[a][b];
			k++;
		}
		if (str[k] == '\0')
		{
			str[k++] = '\n';
		}
	}
	return (str);
}
