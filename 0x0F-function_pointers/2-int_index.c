#include "function_pointers.h"

/**
 * int_index - return index if comparison = true
 * @array:input array
 * @size: elements count
 * @cmp: pointer
 * Return: on success 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
