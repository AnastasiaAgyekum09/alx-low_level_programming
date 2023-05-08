#include "main.h"

/**
 * _strspn - function that get the length of a prefix substring
 * @s: initial segment
 * @accept: consist bytes
 * Return: 0 on success
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int y;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*s == accept[y])
			{
				n++;
				break;
			}
			else if (accept[y + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
