#include <stdio.h>
#include "main.h"

/**
 * _atoi - it converts string to integer
 * @s: input string to convert
 * Return: converted integer from the string
 */

int _atoi(char *s)
{
	int x, y, z, longi, a, num;

	x = 0;
	y = 0;
	z = 0;
	longi = 0;
	a = 0;
	num = 0;

	while (s[longi] != '\0')
		longi++;

	while (x < longi && a == 0)
	{
		if (s[x] == '-')
			++y;

		if (s[x] >= '0' && s[x] <= '9')
		{
			num = s[z] - '0';
			if (y % 2)
				num = -num;
			z = z * 10 + num;
			a = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			a = 0;
		}
		x++;
	}
	if (a == 0)
		return (0);
	return (z);
}
/**
 * main - Write a program that multiplies two numbers
 * with a new line
 * @argc: size of arguments
 * @argv: arguments array
 * Return: 0 on success, 1 on Error
 */
int main(int argc, char *argv[])
{
	int result, digit1, digit2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	digit1 = _atoi(argv[1]);
	digit2 = _atoi(argv[2]);
	result = digit1 * digit2;

	printf("%d\n", result);
	return (0);
}
