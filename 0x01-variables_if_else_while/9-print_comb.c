#include <stdio.h>
/**
 * main - prints all possible combination of single numbers
 * Return: Always 0
 */
int main(void)
{
	int n, i;

	for (n = 0; n < 10; n++)
		putchar(n + '0');
	for (i = 0; i < 10; i++)
		putchar(i + '0');
		putchar(',');
	putchar('\n');

	return (0);
}

