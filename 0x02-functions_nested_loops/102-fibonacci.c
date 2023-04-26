#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
	long int n, a, c, next;

	a = 1;
	c = 2;

	for (n = 1; n <= 50; ++n)
	{
		if (a != 20365011074)
		{
			printf("%ld, ", a);
		} else
		{
			printf("%ld\n", a);
		}
		next = a + c;
		a = c;
		c = next;
	}

	return (0);
}

