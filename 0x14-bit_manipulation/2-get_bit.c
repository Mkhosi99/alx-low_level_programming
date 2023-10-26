#include <stdio.h>
#include "main.h"
/**
* get_bit - returns value of bits
* @n: number of bits
* @index: index from 0 of bit
* Return: bit value or -1 if error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bv;

	if (index >= sizeof(unsigned long int) * 8)

	{
		return (-1);
	}

	bv = 1UL << index;

	return ((n & bv) != 0);
}
