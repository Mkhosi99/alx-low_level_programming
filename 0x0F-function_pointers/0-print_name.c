#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 * @name: The name that must printed
 * @f: Points the function that must print a name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
