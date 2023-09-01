#include "main.h"

/**
* print_binary - functionwhich will print the binary representation of a number
* @n: the number to be printed in binary form
* Return: nothing
*/
void print_binary(unsigned long int n)
{
	int x, m = 0;
	unsigned long int present;

	for (x = 63; x >= 0; x--)
	{
		present = n >> x;

		if ((present & 1) == 1)
		{
			_putchar('1');
			m++;
		}
		else if (m != 0)
			_putchar('0');
	}
	if (m == 0)
		_putchar('0');
}
