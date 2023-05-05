#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: the buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int a, y, x;

	a = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (a < size)
	{
		y = size - a < 10 ? size - a : 10;
		printf("%08x: ", a);
		for (x = 0; x < 10; x++)
		{
			if (x < y)
				printf("%02x", *(b + a + x));
			else
				printf("  ");
			if (x % 2)
			{
				printf(" ");
			}
		}
		for (x = 0; x < y; x++)
		{
			int c = *(b + a + x);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		a += 10;
	}
}

