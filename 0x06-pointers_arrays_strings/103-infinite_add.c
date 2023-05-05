#include "main.h"
#include <stdio.h>

/**
 * infinite_add - function that add two numbers
 * @n1: the first number
 * @n2: the second number
 * @r: buffer to store result
 * @size_r: it is the buffer size
 * Return: pointer to r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a, b, c, d, e, f, g;

	a = 0;
	while (*(n1 + a) != '\0')
		a++;
	b = 0;
	while (*(n2 + b) != '\0')
		b++;
	if (a >= b)
		d = a;
	else
		d = b;
	if (size_r <= d + 1)
		return (0);
	r[d + 1] = '\0';
	a--, b--, size_r--;
	e = *(n1 + a) - 48, f = *(n2 + b) - 48;
	while (d >= 0)
	{
		c = e + f + g;
		if (c >= 10)
			g = c / 10;
		else
			g = 0;
		if (c > 0)
		*(r + d) = (c % 10) + 48;
		else
			*(r + d) = 0;
		if (b > 0)
			b--, f = *(n2 + b) - 48;
		else
			f = 0;
		d--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}

