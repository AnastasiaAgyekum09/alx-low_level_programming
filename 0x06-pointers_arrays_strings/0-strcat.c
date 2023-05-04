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

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	c = 0;
	while (src[c] != '\0')
	{
		dest[a] = src[c];
		a++;
		c++;
	}
	dest[a] = '\0';
	return (dest);
}
