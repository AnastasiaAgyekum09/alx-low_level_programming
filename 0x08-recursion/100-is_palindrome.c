#include "main.h"
int check_pal(char *s, int x, int len);
int _strlen_recursion(char *s);

/*
 *is_palindrome - check string for palindrome
 *@s: string to input
 *Return: 1 0n success, 0 on error
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * check_pal - checks string recursively for palindrome
 *@s: string to input
 *@x: iterator
 *@len: string lenght
 *Return: 1 0n success, 0 on error
 */

int check_pal(char *s, int x, int len)
{
	if (*(s + x) != *(s + len - 1))
		return (0);
	if (x >= len)
		return (1);
	return (check_pal(s, x + 1, len - 1));
}
/**
 * _strlen_recursion - returns string lenght
 * @s: string to input
 * Return: string lenght
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
