#include "main.h"

/**
 * flip_bits - rounds up the number of bits to change
 * to get from one number to another
 * @n: the first number
 * @m: the second number
 * Return: return number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, t = 0;
	unsigned long int present;
	unsigned long int res = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		present = res >> x;
		if (present & 1)
			t++;
	}

	return (t);
}
