#include "main.h"
int actual_prime(int n, int x);

/**
 * is_prime_number - display prime numbers
 * @n: input integers
 * Return: 1 on success, 0 on error
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - display recursive prime numbers
 * @n: input integers
 * @x: iterator
 * Return: 1 0n success, 0 on error
 */

int actual_prime(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0 && x > 0)
		return (0);
	return (actual_prime(n, x - 1));
}
