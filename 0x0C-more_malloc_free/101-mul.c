#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - prints a function that
 * checks if string contains a non-digit char
 * @s: input string
 * Return: 0 on success, 1 on error
 */

int is_digit(char *s)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] < '0' || s[x] > '9')
			return (0);
		x++;
	}
	return (1);
}

/**
 * _strlen - write a function that returns the length of a string
 * @s: string to be inputed
 * Return: string lenght
 */
int _strlen(char *s)
{
	int y = 0;

	while (s[y] != '\0')
	{
		y++;
	}
	return (y);
}

/**
 * errors - handles errors for the  main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main -  prints function that multiplies two positive numbers
 * @argc: arguments counts
 * @argv: arguments array
 * Return: on success 0
 */
int main(int argc, char *argv[])
{
	char *stringA, *stringB;
	int longiA, longiB, longi, w, count, num1, num2, *result, c = 0;

	stringA = argv[1], stringB = argv[2];
	if (argc != 3 || !is_digit(stringA) || !is_digit(stringB))
		errors();
	longiA = _strlen(stringA);
	longiB = _strlen(stringB);
	longi = longiA + longiB + 1;
	result = malloc(sizeof(int) * longi);
	if (!result)
		return (1);
	for (w = 0; w <= longiA + longiB; w++)
		result[w] = 0;
	for (longiA = longiA - 1; longiA >= 0; longiA--)
	{
		num1 = stringA[longiA] - '0';
		count = 0;
		for (longiB = _strlen(stringB) - 1; longiB >= 0; longiB--)
		{
			num2 = stringB[longiB] - '0';
			count += result[longiA + longiB + 1] + (num1 * num2);
			result[longiA + longiB + 1] = count % 10;
			count /= 10;
		}
		if (count > 0)
			result[longiA + longiB + 1] += count;
	}
	for (w = 0; w < longi - 1; w++)
	{
		if (result[w])
			c = 1;
		if (c)
			_putchar(result[w] + '0');
	}
	if (!c)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
