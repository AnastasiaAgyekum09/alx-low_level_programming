#include "main.h"

/**
 * rev_string - Reverse a string without new line
 * @s: input string
 * Return: void
 */

void rev_string(char *s)
{
	char *str, reverse;
	int string = 0, a, b;

	while (s[string] >= 0)
	{
		if (s[string] == '\0')
			break;
		string++;
	}
		for (a = 0; a < (string - 1); a++)
		{
			for (b = a + 1; b > 0; b--)
			{
				reverse = *(str + b);
				*(str + b) = *(str + (b - 1));
				*(str + (b - 1)) = reverse;
			}
		}
}
