#include "main.h"

/**
 * rev_string - Reverse a string without new line
 * @s: input string
 * Return: string in reverse
 */

void rev_string(char *s)
{
	char reverse = s[0];
	int string = 0;
	int n;

	while (s[string] != '\0')
		string++;
	for (n = 0; n < string; n++)
	{
		string--;
		reverse = s[n];
		s[n] = s[string];
		s[string] = reverse;
	}
}
