#include "main.h"

/**
 * reverse_array - reverse the number of elements in a content
 * of an array of integers
 * @a: array of integers
 * @n: number of integers to reverse
 * Return: null
 */

void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
