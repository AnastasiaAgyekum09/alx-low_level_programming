#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate valid  random password
 * for 101-crackme
 * Return: always 0
 */

int main(void)
{
	int password[100];
	int a, result, x;

	result = 0;
	srand(time(NULL));
	for (a = 0; a < 100; a++)
	{
		password [a] = rand() % 78;
		result += (password[a] + '0');
		putchar(password[a] + '0');
		if ((2772 - result) - '0' < 78)
		{
			x = 2772 - result - '0';
			result += x;
			putchar(x + '0');
			break;
		}
	}
	return (0);
}
