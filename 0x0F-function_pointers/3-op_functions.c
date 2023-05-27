#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - function that sum two integers
 * @a: input first number
 * @b: input second number
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function that returns the difference of two numbers.
 * @a: input first number
 * @b: input second number
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - prints function that returns the product of two numbers.
 * @a: input first number.
 * @b: input second number.
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function that returns the division of two numbers.
 * @a: input first number
 * @b: input second number
 * Return: quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - function that returns the remainder of the division of two numbers.
 * @a: input first number
 * @b: input second number
 * Return: remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
