#include "main.h"

/**
 * _strcmp - function that compares two string
 * @s1: input string one
 * @s2: input string two
 * Return: the difference in s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	int x;

	x = 0;
	while (s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
		x++;
	}
	return (0);
}
