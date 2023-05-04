#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @c: pointer to string
 * Return: *c on success
 */

char *rot13(char *c)
{
	int x, y;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; c[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (c[x] == s1[y])
			{
				c[x] = s2[y];
				break;
			}
		}
	}
	return (c);
}
