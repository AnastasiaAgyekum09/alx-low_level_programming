#include "main.h"

/**
 * _atoi - Convert string to integer
 * @s: input string
 * Return: integer converted from string
 */

int _atoi(char *s)
{
	int a, b, x, height, y, num;

	a = 0;
	b = 0;
	x = 0;
	height = 0;
	y = 0;
	num = 0;
	
	while (s[height] != '\0')
		height++;
	while (a < height && y == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			num = s[a] - '0';
			if (b % 2)
				num = -num;
			x = x * 10 + num;
			y = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			y = 0;
		}
		a++;
	}
	if (y == 0)
		return (0);
	return (x);
}
