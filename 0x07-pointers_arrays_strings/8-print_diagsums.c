#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: input array
 * @size: input the size of array
 * Return: 0 on success
 */

void print_diagsums(int *a, int size)
{
	int num0, num1, x;

	num0 = 0;
	num1 = 0;

	for (x = 0; x < size; x++)
	{
		num0 = num0 + a[x * size + x];
	}

	for (x = size - 1; x >= 0; x--)
	{
		num1 += a[x * size + (size - x - 1)];
	}

	printf("%d, %d\n", num0, num1);
}
