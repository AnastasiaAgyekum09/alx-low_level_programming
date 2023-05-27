#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - write correct function to perform user operation
 * @s: operator passed as argument.
 * Return:  pointer to function corresponding
 * to operator given as a parameter.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int x = 0;

	while (ops[x].op != NULL && *(ops[x].op) != *s)
		x++;
	return (ops[x].f);
}
