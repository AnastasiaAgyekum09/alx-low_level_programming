#include "main.h"

/**
 * _strspn - function that get the length of a prefix substring
 * @s: input
 * @accept: input bytes
 * Return: 0 on success
 */

unsigned int _strspn(char *s, char accept)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == accept)
			return (&s[x]);
	}
	return (0);
}
