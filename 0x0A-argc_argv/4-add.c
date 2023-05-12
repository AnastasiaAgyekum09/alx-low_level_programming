#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check string for number
 * @str: input string
 * Return: 0 on success
 */

int check_num(char *str)
{
	unsigned int size;

	size = 0;
	while (size < strlen(str))
	{
		if (!isdigit(str[size]))
		{
			return (0);
		}

		size++;
	}
	return (1);
}
/**
 * main - Write a program that adds positive numbers
 * with a new line
 * @argc: size of arguments
 * @argv: Arguments array
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int size;
	int str_to_int;
	int sum = 0;

	size = 1;
	while (size < argc)
	{
		if (check_num(argv[size]))
		{
			str_to_int = atoi(argv[size]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		size++;
	}

	printf("%d\n", sum);
	return (0);
}
