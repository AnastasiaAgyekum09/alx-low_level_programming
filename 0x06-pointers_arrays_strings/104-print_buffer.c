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
	int x, y, z;

	if (size <= 0)
		printf("\n");
	else
	{
		for (x = 0; x < size; x += 10)
		{
			printf("%08x:", x);
			for (y = x; y < x + 10; y++)
			{
				if (y % 2 == 0)
					printf(" ");
				if (y < size)
					printf("%02x", *(b + y));
				else
					printf(" ");
			}
			printf(" ");
			for (z = x; z < x + 10; z++)
			{
				if (z >= size)
					break;
				if (*(b + z) < 32 || *(b + z) > 132)
					printf("%c", '.');
				else 
					printf("%c", *(b + z));
			}
			printf("\n");
		}
	}
}

