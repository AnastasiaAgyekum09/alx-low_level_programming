#include "main.h"

/**
 * puts2 - starting with first character
 * print every other character with string
 * @str: input string
 * Return: write output
 */

void puts2(char *str)
{
	int a = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		if ((a % 2) == 0)
			_putchar(str[a]);
		else
			continue;
	}
	_putchar('\n');
}
