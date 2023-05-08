#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: address of the memory to be filled
 * @n: number of bytes
 * @b: constant bytes
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x;

	for (x = 0; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}

