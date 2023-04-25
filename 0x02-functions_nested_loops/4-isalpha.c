#include "main.h"
/**
 * _isalpha - Checks for alphabetic character
 *
 * @c: the alphabet to check for
 *
 * Return: 1 if c is a letter, lowercase or upper case 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}

