#include "main.h"

/**
 * _puts_recursion - print string followed by a new line
 * @s: input string
 * Return: 0 on success
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
