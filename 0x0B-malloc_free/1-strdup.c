#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - print function of a pointer to allocated space
 * in memory containing string copy
 *@str: string to input
 * Return: NULL
 */

char *_strdup(char *str)
{
	char *counts;
	int x, y = 0;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
		x++;
	counts = malloc(sizeof(char) * (x + 1));
	if (counts == NULL)
		return (NULL);
	for (y = 0; str[y]; y++)
		counts[y] = str[y];
	return (counts);
}
