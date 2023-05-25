#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - print name with function pointer
* @name: input name
* @f: pointer
* Return: NULL
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
