#include "main.h"

/**
 * print_rev - print string in reverse followed by a new line
 * @s: string to input
 * Return: string in reverse
 */

void print_rev(char *s)
{
	int x;
	int string = 0;

	while (*s != '\0')
		x++;
		string++;
	for (x = string; x > 0; x--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
