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
	int a, y, z;

	if (size <= 0)
		printf("\n");
	else
	{
		for (a = 0; a < size; a += 10)
		{
			printf("%.8x:", a);
			for (y = a; y < a + 10; y++)
			{
				if (y % 2 == 0)
					printf(" ");
				if (y < size)
					printf("%.2x", *(b + y));
				else
					printf(" ");
			}
			printf(" ");
			for (z = a; z < a + 10; z++)
			{
				if (z >= size)
					break;
				if (*(b + z) < 32 || *(b + z) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + z));
			}
			printf("\n");
		}
	}
}
