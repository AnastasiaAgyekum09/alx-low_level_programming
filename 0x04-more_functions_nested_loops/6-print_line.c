#include "main.h"

/**
 * print_line - draw  straight line in terminal.
 * @n: times straight line is printed.
 * Return: nothing
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar(95);
	}
	_putchar('\n');
}

