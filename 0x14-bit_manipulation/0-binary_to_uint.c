#include "main.h"

/**
* binary_to_uint - will convert binary number to unsigned int
* @b: string of binary number
* Return: unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int w = 0, e = 0;

	if (!b)
		return (0);

	while (b[w])
	{
		if (b[w] == '0' || b[w] == '1')
		{
			e <<= 1;
			e += b[w] - '0';
			w++;
		}
		else
			return (0);
	}
	return (e);
}
