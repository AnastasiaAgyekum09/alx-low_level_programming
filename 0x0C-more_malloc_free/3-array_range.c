#include <stdlib.h>
#include "main.h"

/**
 * array_range - prints a function that creates an array of integers.
 * @min: minimum values to be stored
 * @max: maximum values to be stored
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *array;
	int x, counts;

	if (min > max)
		return (NULL);
	counts = max - min + 1;
	array = malloc(sizeof(int) * counts);
	if (array == NULL)
		return (NULL);
	for (x = 0; min <= max; x++)
		array[x] = min++;
	return (array);
}
