#include "main.h"
#include <stdlib.h>

/**
 * str_concat - prints function that concatenates two string
 * @s1: first string to input
 * @s2: second string to input
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int A, men;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
		A = men = 0;
	while (s1[A] != '\0')
		A++;
	while (s2[men] != '\0')
		men++;
	concat = malloc(sizeof(char) * (A + men + 1));
	if (concat == NULL)
		return (NULL);
	A = men = 0;
	while (s1[A] != '\0')
	{	concat[A] = s1[A];
		A++;
	}
	while (s2[men] != '\0')
	{
		concat[A] = s2[men];
		A++, men++;
	}
	concat[A] = '\0';
	return (concat);
}
