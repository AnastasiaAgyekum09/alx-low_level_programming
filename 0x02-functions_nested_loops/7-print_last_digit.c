#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @i: the integer to get the last digit from
 * Return: the value of the last digit
 */
int print_last_digit(int i)
{
	int x;

	if (i < 0)
		i = -i;
	x = i % 10;
	if (x < 0)
		x = -x;
	_putchar(x + '0');
	return (x);
}
