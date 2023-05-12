#include <stdio.h>
#include "main.h"

/**
 * main - Write a program that prints all arguments it receives
 * with new line
 * @argc: size of arguments
 * @argv: arguments array
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
