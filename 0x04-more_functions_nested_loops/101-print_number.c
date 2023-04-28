#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: nothing.
 */

void print_number(int n)
{
	unsigned int man, dog, cat;

	if (n < 0)
	{
		_putchar(45);
		man = n * -1;
	}
	else
	{
		man = n;
	}

	dog = man;
	cat = 1;

	while (dog > 9)
	{
		dog /= 10;
		cat *= 10;
	}

	for (; cat >= 1; cat /= 10)
	{
		_putchar(((man / cat) % 10) + 48);
	}
}

