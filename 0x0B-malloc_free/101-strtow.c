#include <stdlib.h>
#include "main.h"

/**
 * count_word - function to count the number of words in a string
 * @s: string to count
 * Return: number of strings
 */

int count_word(char *s)
{
	int count, x, y;

	count = 0;
	y = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == ' ')
			count = 0;
		else if (count == 0)
		{
			count = 1;
			y++;
		}
	}

	return (y);
}
/**
 * **strtow - splits string into words
 * @str: the string to split
 * Return: on success, pointer to an array of strings
 * NULL on error
 */
char **strtow(char *str)
{
	char **string, *split;
	int x, y = 0, longi = 0, word, z = 0, first, last;

	while (*(str + longi))
		longi++;
	word = count_word(str);
	if (word == 0)
		return (NULL);
	string = (char **) malloc(sizeof(char *) * (word + 1));
	if (string == NULL)
		return (NULL);

	for (x = 0; x <= longi; x++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (z)
			{
				last = x;
				split = (char *) malloc(sizeof(char) * (z + 1));
				if (split == NULL)
					return (NULL);
				while (first < last)
					*split++ = str[first++];
				*split = '\0';
				string[y] = split - z;
				y++;
				z = 0;
			}
		}
		else if (z++ == 0)
			first = x;
	}

	string[y] = NULL;

	return (string);
}
