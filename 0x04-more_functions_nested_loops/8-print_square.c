#include "main.h"

/**
 * print_square - prints hashes squares followed by a new line.
 * @size: size of the square.
 * Return: nothing.
 */

void print_square(int size)
{
	int h, s;

	for (h = 0; h < size; h++)
	{
		for (s = 0; s < size; s++)
		{
			_putchar(35);
		}
		if (h != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
