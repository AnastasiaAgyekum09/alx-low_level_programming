#include "main.h"

/**
 * swap_int - swap values of two integers
 * @a: integer one
 * @b: integer two
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
