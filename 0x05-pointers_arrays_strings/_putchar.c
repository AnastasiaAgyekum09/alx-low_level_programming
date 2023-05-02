#include <unistd.h>
/**
 * _putchar - writes charater c to stdout
 * @c: print this charater
 * Return: 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
