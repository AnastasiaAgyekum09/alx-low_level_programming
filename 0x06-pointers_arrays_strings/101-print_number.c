#include "main.h"

/**
 * print_number - print an integer without arrays or pointer
 * @n: input integer
 * Return: 0 always
 */

void print_number(int n)
{
	unsigned int x, y, z;

	if (n < 0)
	{
		_putchar(45);
		x = -n;
	}
	else
	{
		x = n;
	}
	y = x;
	z = 1;
	while (y > 9)
	{
		y /= 10;
		z *= 10;
	}
	for (; z >= 1; z /= 10)
	{
		_putchar(((x / z) % 10) + 48);
	}
}
