#include "main.h"

/**
 * print_numbers - print numbers, from 0 to 9
 * followed by a new line
 * Return: nothing
 */
void print_numbers(void)
{
	char c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
