#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Selects correct function to run requested by user
 * @s: The operator passed as an argument
 *
 * Return: Pointer to function pointing to the oprator
 *         given as a parameter
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
