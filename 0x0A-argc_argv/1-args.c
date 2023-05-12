#include <stdio.h>
#include "main.h"

/**
 * main - Write a program that prints the number of arguments passed into it
 * followed by a new line
 * @argc: size of arguments
 * @argv: arguments array
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
