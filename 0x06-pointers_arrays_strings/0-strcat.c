#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: copy string to
 * @src: copy string from
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int c;

	for (a = 0; dest[a] != '\0'; a++)
		for (c = 0; src[c] != '\0'; c++)
		{
			dest[a] = src[c];
			a++;
			c++;
		}
		dest[a] = '\0';
	return (dest);
}
