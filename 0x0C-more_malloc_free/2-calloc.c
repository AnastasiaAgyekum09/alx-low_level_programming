#include <stdlib.h>
#include "main.h"

/**
 * _memset - prints function that fills memory with constant bytes
 * @s: memory to be filled
 * @b: copy char from
 * @n: input number
 * Return: pointer to memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
	{
		s[p] = b;
	}

	return (s);
}

/**
 * _calloc - prints a function that allocates
 * memory for an array, using malloc
 * @nmemb: elements in the array
 * @size: element size
 * Return: allocated memory pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(size * nmemb);

	if (pointer == NULL)
		return (NULL);

	_memset(pointer, 0, nmemb * size);

	return (pointer);
}
