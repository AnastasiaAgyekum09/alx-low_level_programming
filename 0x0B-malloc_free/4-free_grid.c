#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - prints function that frees a 2 dimensional grid
 * @grid: thr grid to free
 * @height: the height to input
 * Return: null
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
