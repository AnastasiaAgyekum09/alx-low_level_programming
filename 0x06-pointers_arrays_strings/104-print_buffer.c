#include "main.h"
#include <stdio.h>

/**
 * print_buffer - print the content of the size
 * bytes of the buffer pointed by b
 * @b: the buffer
 * @size: size of the buffer
 * Return: nothing
 */

void print_buffer(char *b, int size)
{
	int x = 0, y, z;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (x < size)
	{
		y = size - x < 10 ? size - x : 10;
		printf("%08x:", x);
		for (z = 0; z < 10; z++)
		{
			if (z < y)
				printf("%02x", *(b + x + z));
				else
					printf(" ");
			if (z % 2)
			{
				printf(" ");
			}
		}
		for (z = 0; z < y; z++)
		{
			int c = *(b + x + z);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		x += 10;
	}
}

