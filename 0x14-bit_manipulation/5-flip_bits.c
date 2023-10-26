#include "main.h"
#include <stdio.h>
/**
* flip_bits - Returns number of bits
* @n: number used
* @m: indicates number of bits
* Return: number of bits that must be flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flp = n ^ m;
	unsigned int add = 0;

	while (flp)
	{
		add += flp & 1;
		add >>= 1;
	}

	return (add);
}
