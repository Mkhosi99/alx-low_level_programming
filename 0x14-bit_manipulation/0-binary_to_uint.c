#include "main.h"

/**
 * binary_to_uint - will convert binary number to unsigned int
 * @b: string with binary number
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int bv = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		bv = 2 * bv + (b[x] - '0');
	}

	return (bv);
}
