#include "main.h"

/**
 * leet - function that encodes string into 1337
 * @i: input value
 * Return: the value i
 */

char *leet(char *i)
{
	int x, y;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (x = 0; i[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (i[x] == s1[y])
			{
				i[x] = s2[y];
			}
		}
	}
	return (i);
}
