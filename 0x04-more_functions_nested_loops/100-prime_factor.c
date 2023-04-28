#include <stdio.h>

/**
 * main - find and  prints the  largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int i, pr;

	i = 612852475143;
	for (pr = 2; pr <= i; pr++)
	{
		if (i % pr == 0)
		{
			i /= pr;
			pr--;
		}

	}
	printf("%ld\n", pr);
	return (0);
}
