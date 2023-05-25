#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - write each element with newline
 * @array: input array
 * @size: element count
 * @action: pointer
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
