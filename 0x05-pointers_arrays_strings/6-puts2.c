#include "main.h"

/**
 * puts2 - starting with first character
 * print every other character with string
 * @str: input string
 * Return: write output
 */

void puts2(char *str)
{
	char *b = str;
	int string = 0;
	int a = 0;
	int x;

	while (*b != '\0')
		b++;
	a = string - 1;
	for (x = 0; x <= a; x++)
		if (x % 2 == 0)
		{
			_putchar(str[0]);
		}
	_putchar('\n');
}
