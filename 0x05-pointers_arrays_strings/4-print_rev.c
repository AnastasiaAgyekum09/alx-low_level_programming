#include "main.h"

/**
 * print_rev - print string in reverse followed by a new line
 * @s: string to input
 * Return: nothing
 */

void print_rev(char *s)
{
	int x = 0;

	while (*s[x] != '\0')
		x++;
	for (x = x - 1; x >= 0; x--)
		_putchar(s[x]);

	_putchar('\n');
}
