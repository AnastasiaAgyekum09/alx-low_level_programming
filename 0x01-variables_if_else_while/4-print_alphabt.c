#include <stdio.h>
/**
 * main - print the alphabet in lower case followed by a new line
 * Return: Always 0
 */
int main(void)
{
	char f;

	for (f = 'a'; f <= 'z'; f++)
	{
		if (f != 'e' && f != 'q')
			putchar(f);
	}
	putchar('\n');

	return (0);
}
