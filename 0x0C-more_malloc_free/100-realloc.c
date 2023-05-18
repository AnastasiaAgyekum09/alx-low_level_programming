#include <stdlib.h>
#include "main.h"

/**
 * _realloc - prints function reallocates a memory block using malloc and free
 * @ptr: previous pointer to the memory allocated by malloc
 * @old_size: size of memory for pointer
 * @new_size: new size of new memory block
 * Return: pointer to allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *New_pointer;
	char *old_pointer;
	unsigned int z;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	New_pointer = malloc(new_size);
	if (!New_pointer)
		return (NULL);
	old_pointer = ptr;
	if (new_size < old_size)
	{
		for (z = 0; z < new_size; z++)
			New_pointer[z] = old_pointer[z];
	}
	if (new_size > old_size)
	{
		for (z = 0; z < old_size; z++)
			New_pointer[z] = old_pointer[z];
	}
	free(ptr);
	return (ptr);
}
