#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that prints the minimum number of coins
 * to make change for an amount of money followed by new line
 * @argc: size of arguments
 * @argv: arguments array
 * Return: 0 on success, 1 on Error
 */

int main(int argc, char *argv[])
{
	int digit, x, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	digit = atoi(argv[1]);
	result = 0;

	if (digit < 0)
	{
		printf("0\n");
		return (0);
	}

	for (x = 0; x < 5 && digit >= 0; x++)
	{
		while (digit >= coins[x])
		{
			result++;
			digit -= coins[x];
		}
	}

	printf("%d\n", result);
	return (0);
}
