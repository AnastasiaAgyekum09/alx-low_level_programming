#include "main.h"
/**
 * _islower - checks for lower case
 * @c: Charater to be checked
 * Return: if charater is lower case otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
