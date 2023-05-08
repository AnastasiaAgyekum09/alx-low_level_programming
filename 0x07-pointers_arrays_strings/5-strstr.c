#include "main.h"

/**
 * _strstr - write function that locates a substring
 * @haystack: input string
 * @needle: input substring
 * Return: 0 on success
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x = haystack;
		char *y = needle;

		while (*x == *y && *y != '\0')
		{
			x++;
			y++;
		}

		if (*y == '\0')
			return (haystack);
	}

	return (0);
}
