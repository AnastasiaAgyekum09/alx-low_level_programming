#include "main.h"

/**
 * _strncpy - function that copies a string
 * @src: copy string from
 * @n: imput number of bytes
 * @dest: copy string to
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int y;

	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[y] = src[y];
		y++;
	}
		while (y < n)
		{
			dest[y] = '\0';
			y++;
		}
	return (dest);
}
