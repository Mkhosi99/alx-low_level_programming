#include "main.h"

/**
 * print_line - look for a digit
 * @n :print number of _
 * Return:void
 */

void print_line(int n)
{

	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');

}
