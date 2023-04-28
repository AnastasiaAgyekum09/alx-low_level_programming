#include "main.h"

/**
 * print_diagonal - draw diagonal line in the terminal.
 * @n: number of times diagonal line is printed.
 * Return: nothing.
 */

void print_diagonal(int n)
{
	int d, t;

	for (d = 0; d < n; d++)
	{
		for (t = 0; t < d; t++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (d < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
