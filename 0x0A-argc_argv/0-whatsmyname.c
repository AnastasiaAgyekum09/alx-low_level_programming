#include <stdio.h>
#include "main.h"

/**
 * main - Write a program that prints name, followed by  new line.
 * @argc: size of arguments
 * @argv: arguments array
 * Return: 0 on success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
