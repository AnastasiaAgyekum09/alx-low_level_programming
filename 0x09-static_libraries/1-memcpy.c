#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @n: number of bytes in memory
 * @src: copy bytes from
 * @dest: copy bytes to
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int f;
	int t = n;

	for (f = 0; f < t; f++)
	{
		dest[f] = src[f];
		n--;
	}
	return (dest);
}
