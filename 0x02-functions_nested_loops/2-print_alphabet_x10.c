#include "main.h"
#include <unistd.h>
/**
 * print_alphabet_x10 - print 10 times the 'a-z' in lowercase
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (c = 'a'; c = 'z'; c++)
	{

		for (i = 0; i <= 10; i++)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
