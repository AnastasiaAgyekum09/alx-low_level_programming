#include "main.h"

/**
 *  puts_half - print half of a string followed by a new line
 *  @str: input string
 *  Return: half of the input
 */

void puts_half(char *str)
{
	int x = 0;

	while (*str != '\0')
	{
		x++;
		str++;
	}
	str -= (x / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
