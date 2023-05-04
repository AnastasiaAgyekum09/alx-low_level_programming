#include "main.h"

/**
 * string_toupper - function that change all lowercase letters
 * of a string to uppercase
 * @n: the pointer
 * Return: n
 */

char *string_toupper(char *n)
{
	int x;

	for (x = 0; n[x] != '\0'; x++)
	{
		if (n[x] >= 'a' && n[x] <= 'z')
			n[x] = n[x] - 32;
	}
	return (n);
}
