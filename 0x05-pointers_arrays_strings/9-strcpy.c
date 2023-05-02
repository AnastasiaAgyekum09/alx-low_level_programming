#include "main.h"

/**
 * _strcpy - copy the string pointed to by src
 * and include terminating null bytes ('\0')
 * @dest: copy spring to
 * @src: copy spring from
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int spring = 0;

	while (*(src + spring) != '\0')
	{
		*(dest + spring) = *(src + spring);
		spring++;
	}
	*(dest + spring) = '\0';
	return (dest);
}
