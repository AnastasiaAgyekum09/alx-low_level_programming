#include "main.h"
#include <stdlib.h>

/**
 * argstostr - display function that concatenates all
 * the arguments of your program
 * @ac: integer to input
 * @av: double pointer
 * Return: NULL on failure
 */

char *argstostr(int ac, char **av)
{
	int x, y, z = 0, a = 0;
	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			a++;
	}
	a += ac;

	string = malloc(sizeof(char) * a + 1);
	if (string == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
	for (y = 0; av[x][y]; y++)
	{
		string[z] = av[x][y];
		z++;
	}
	if (string[z] == '\0')
	{
		string[z++] = '\n';
	}
	}
	return (string);
}
