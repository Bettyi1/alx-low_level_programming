#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * free_grid - function frees a 2 dimensional grid
 * @grid: grid value to free
 * @height: grid height
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0 ; j < height ; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
