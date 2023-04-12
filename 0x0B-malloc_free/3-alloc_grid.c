#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function returns a pointer
 * @width:  input value
 * @height: input value
 * Return: pointer to 2 dim. array
 */
{
	int **array;
	int a;
	int j;

	if (height <= 0 || width <= 0)
		return (NULL);

	array = (int **) malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		array[a] = (int *) malloc(sizeof(int) * width);
		if (array[a] == NULL)
		{
			free(array);
			for (j = 0; j <= a; j++)
				free(array[j]);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (j = 0; j < width; j++)
		{
			array[a][j] = 0;
		}
	}
	return (array);
}
