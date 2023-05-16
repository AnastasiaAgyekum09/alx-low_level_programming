#include "main.h"
#include <stdlib.h>

/**
 * create_array - Write a function that creates an array of chars,
 * and initializes it with a specific char
 * @size: the size of an array
 * @c: character to input
 * Return: NULL, if size is 0 on error NULL
 */

char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int x;

	string = malloc(sizeof(char) * size);
	if (size == 0 || string == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		string[x] = c;
	return (string);
}
