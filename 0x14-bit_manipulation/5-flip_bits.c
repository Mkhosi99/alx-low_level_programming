#include "main.h"

/**
* flip_bits - number of bits you would need to flip to get form one to another
*@n: num to flip
*@m: number 2
*Return: unsigned int
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x = 0;
	unsigned int flp = 0;

	while (x <= 63)
	{
		if ((n & 1) != (m & 1))
			flp++;

		n >>= 1;
		m >>= 1;
		x++;
	}
	return (flp);
}
