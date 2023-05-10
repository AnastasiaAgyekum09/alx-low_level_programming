#include "main.h"
int actual_sqrt_recursion(int n, int a);

/**
 * _sqrt_recursion - write square root of a number
 * @n: input number
 * Return: on error, return -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - recurses to write square root of a number
 * @n: input number
 * @a: iterator
 * Return: square root result
 */

int actual_sqrt_recursion(int n, int a)
{
	if (a * a == n)
		return (a);
	if (a * a >  n)
		return (-1);
	return (actual_sqrt_recursion(n, a + 1));
}
