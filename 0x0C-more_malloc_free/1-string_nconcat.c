#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - display a function that concatenates two strings.
 * @s1: add string to
 * @s2: contenates string from
 * @n: bytes number
 * Return: string result to pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int a = 0, b = 0, longiA = 0, longiB = 0;

	while (s1 && s1[longiA])
		longiA++;
	while (s2 && s2[longiB])
		longiB++;

	if (n < longiB)
		x = malloc(sizeof(char) * (longiA + n + 1));
	else
		x = malloc(sizeof(char) * (longiA + longiB + 1));

	if (!x)
		return (NULL);

	while (a < longiA)
	{
		x[a] = s1[a];
		a++;
	}

	while (n < longiB && a < (longiA + n))
		x[a++] = s2[b++];

	while (n >= longiB && a < (longiA + longiB))
		x[a++] = s2[b++];

	x[a] = '\0';

	return (x);
}
