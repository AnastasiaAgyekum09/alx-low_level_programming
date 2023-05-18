#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - Write a function that allocates memory using malloc
 * @b: bytes counts to allocate
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);

	if (memory == NULL)
		exit(98);

	return (memory);
}
