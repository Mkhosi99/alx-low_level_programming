#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap two integers value
 * @a: pointer to the first int value
 * @b: pointer to the second int value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
