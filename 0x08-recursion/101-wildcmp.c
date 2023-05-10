#include "main.h"

/**
 * wildcmp - function that compares two strings
 * @s1: first character
 * @s2: special character
 * Return: 1 0n identical, 0 on not identical
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}
	else if (*s2 == *s1)
	{
		return (wildcmp(s2 + 1, s1 + 1));
	}
	return (0);
}
