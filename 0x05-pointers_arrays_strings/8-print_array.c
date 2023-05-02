#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of arrays of integers
 * followed by a new line
 * @a: input array name
 * @n: input number of arrays
 * Return: *a and n input
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
			printf(", ");
	}
	printf("\n");
}
