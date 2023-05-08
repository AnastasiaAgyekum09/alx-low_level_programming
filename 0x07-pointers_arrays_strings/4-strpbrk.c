#include "main.h"

/**
 * _strpbrk - function that searches a string
 * for any of a set a bytes
 * @s: input string
 * @accept: input bytes
 * Return: 0 on success
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

		while (*s)
		{
			for (a = 0; accept[a]; a++)
			{
			if (*s == accept[a])
			return (s);
			}
		s++;
		}

	return ('\0');
}
