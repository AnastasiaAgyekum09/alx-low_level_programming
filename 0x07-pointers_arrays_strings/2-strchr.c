#include "main.h"

/**
 * _strspn - function that locate a character in a string
 * @s: input string
 * @c: input character
 * Return: 0 on success
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
