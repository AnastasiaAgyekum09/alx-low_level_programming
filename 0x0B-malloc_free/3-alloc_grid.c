#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - prints function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: the width of an integer
 * @height: the height of an integer
 * Return: on failure, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int wide, longi;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (wide = 0; wide < height; wide++)
	{
		grid[wide] = malloc(sizeof(int) * width);

		if (grid[wide] == NULL)
		{
			for (wide = 0; wide >= 0; wide--)
				free(grid[wide]);

			free(grid);
			return (NULL);
		}
	}

	for (wide = 0; wide < height; wide++)
	{
		for (longi = 0; longi < width; longi++)
			grid[wide][longi] = 0;
	}

	return (grid);
}

